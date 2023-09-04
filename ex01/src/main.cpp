/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:20:06 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/04 17:37:22 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

static void display_menu(void)
{
    std::cout << BLUE << "Please type one of the following commands:" << std::endl;
    std::cout << MAGENTA << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << CYAN << ">> " << ORIGINAL << std::flush;
}

int main(int ac, char **av)
{
    std::string input;
    PhoneBook   phonebook;

    (void)av;
    if(ac != 1)
        std::cout << "Error!: Too many arguments!\nUsage: ./PhoneBook" << std::endl;
    else
    {
        while(1)
        {
            std::cout << CYAN << "PhoneBook> " << std::flush;
            display_menu();
            std::getline(std::cin, input);
            if(std::cin.eof())
                return (1);
            if(input == "EXIT")
            {
                std::cout << CYAN << "Exiting..." << ORIGINAL << std::endl;
                break;
            }
            else if(input == "ADD")
                phonebook.add_contact();
            else if(input == "SEARCH")
                phonebook.search_contact();
           else
                std::cout << RED << "Error!: Invalid command!" << ORIGINAL << std::endl;
        }
    }
    return (0);
}
