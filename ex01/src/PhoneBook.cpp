/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:14:53 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/08/31 19:29:02 by abaiao-r         ###   ########.fr       */
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



int PhoneBook::search_contact(void)
{
    int i;

    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    i = 0;
    while(i < this->index)
    {
        std::cout << std::setw(10) << i + 1 << "|";
        std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
        std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
        std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
        i++;
    }
    std::cout << "Please enter the index of the contact you wish to view: ";
    
    return (0);

}


int PhoneBook::add_contact(void)
{
	std::string temp_first_name;
	std::string temp_last_name;
	std::string temp_nickname;
	std::string temp_phone_number;
	std::string temp_darkest_secret;

	if (this->index == 8)
	{
		this->index == 0;
	}
	std::cout << "Please enter the following information:" << std::endl;
	std::cout << "First Name: ";
    if(!std::getline(std::cin, temp_first_name))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return (1);
    }
    std::cout << "Last Name: ";
    if(!std::getline(std::cin, temp_last_name))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return (1);
    }
    std::cout << "Nickname: ";
    if(!std::getline(std::cin, temp_nickname))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return (1);
    }
    std::cout << "Phone Number: ";
    if(!std::getline(std::cin, temp_phone_number))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return (1);
    }
    std::cout << "Darkest Secret: ";
    if(!std::getline(std::cin, temp_darkest_secret))
    {
        std::cout << "Error: Invalid input" << std::endl;
        return (1);
    }
    this->contacts[this->index].set_first_name(temp_first_name);
    this->contacts[this->index].set_last_name(temp_last_name);
    this->contacts[this->index].set_nickname(temp_nickname);
    this->contacts[this->index].set_phone_number(temp_phone_number);
    this->contacts[this->index].set_darkest_secret(temp_darkest_secret);
	this->index++;
	std::cout << "Contact added successfully!" << std::endl;
	return (0);
}
