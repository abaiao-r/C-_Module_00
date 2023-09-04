/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:53 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/04 15:54:01 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{
}

std::string get_input(std::string prompt)
{
    std::string input;

    std::cout << prompt;
    std::cin.clear();
    std::getline(std::cin, input);
    if(std::cin.eof())
        exit(0);
    return (input);
}
std::string PhoneBook::get_valid_index(std::string prompt, int index)
{
    std::string input;

    while (1)
    {
        input = get_input(prompt);
        if (input.length() == 1 && input[0] >= '0' && input[0] <= '7' && input[0] - '0' < index)
            return (input);
        std::cout << RED << "Error!: Invalid index. Please try again." << ORIGINAL << std::endl;
    }
}


int PhoneBook::search_contact(void)
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    int select_index;
    int i;

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    i = 0;
    while(i < 8 && this->contacts[i].get_first_name() != "")
    {
        std::cout << std::setw(10) << i << "|";
        first_name = this->contacts[i].get_first_name();
        last_name = this->contacts[i].get_last_name();
        nickname = this->contacts[i].get_nickname();
        
        if (first_name.length() > 10)
            first_name = first_name.substr(0, 9) + ".";
        if (last_name.length() > 10)
            last_name = last_name.substr(0, 9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        
        std::cout << std::setw(10) << first_name << "|";
        std::cout << std::setw(10) << last_name << "|";
        std::cout << std::setw(10) << nickname << std::endl;
        i++;
    }
    if (this->index == 0)
    {
        std::cout << RED << "     No contacts to display."  <<  ORIGINAL << std::endl;
        return (0);
    }
    select_index = std::atoi(get_valid_index("Please enter the index of the contact you wish to view: ", this->index).c_str());
    std::cout << "Contact details for index " << select_index << ":" << std::endl;
    this->contacts[select_index].display_contact();
    return (0);
}


bool str_is_only_whitespace(const std::string &str)
{
    size_t i;

    i = 0;
    while(str[i])
    {
        if (!std::isspace(str[i]))
            return (false);
        i++;
    }
    return (true);
}

std::string PhoneBook::get_valid_input(std::string prompt)
{
    std::string input;

    while(1)
    {
        input = get_input(prompt);
        if (!input.empty() && !str_is_only_whitespace(input))
            return (input);
        std::cout << "Error: Invalid input" << std::endl;
    }
}

bool str_is_valid_phone_nbr(const std::string &str)
{
    int i;

    if(str[0] == '+')
        i = 1;
    else
        i = 0;
    while(str[i])
    {
        if (!std::isdigit(str[i]))
            return (false);
        i++;
    }
    if (i > 14 || i == 0)
        return (false);
    return (true);
}

std::string PhoneBook::get_valid_phone_nbr(std::string prompt)
{
    std::string input;

    while(1)
    {
        input = get_input(prompt);
        if (str_is_valid_phone_nbr(input))
            return (input);
        std::cout << "Error: Invalid phone number" << std::endl;
    }
}

Contact PhoneBook::create_contact(void)
{
    Contact newContact;

    std::cout << "Please enter the following information:" << std::endl;

    newContact.set_first_name(get_valid_input("First Name: "));
    newContact.set_last_name(get_valid_input("Last Name: "));
    newContact.set_nickname(get_valid_input("Nickname: "));
    newContact.set_phone_number(get_valid_phone_nbr("Phone Number: "));
    newContact.set_darkest_secret(get_valid_input("Darkest Secret: "));
    return (newContact);
}

void PhoneBook::add_contact(void)
{
    Contact newContact;

    newContact = create_contact();
	if (this->index == 8)
		this->index = 0;
    this->contacts[this->index] = newContact;
	this->index++;
	std::cout << "Contact added successfully!" << std::endl;
}


/* int main to test str_is_only_whitespace */
/* int main (void)
{
    std::string input;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    if (str_is_only_whitespace(input))
        std::cout << "String is only whitespace" << std::endl;
    else
        std::cout << "String is not only whitespace" << std::endl;
    return (0);
} */

