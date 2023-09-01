/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:20:06 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/01 20:08:35 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void display_menu(void)
{
    std::cout << "Please type one of the following commands:" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << ">> " << std::flush;
}

int main(int ac, char **av)
{
    std::string input;
    PhoneBook phonebook;

    (void)av;
    if(ac != 1)
        std::cout << "Error!: Too many arguments!\nUsage: ./PhoneBook" << std::endl;
    else
    {
        while(1)
        {
            std::cout << "PhoneBook> " << std::flush;
            display_menu();
            std::getline(std::cin, input);
            if(std::cin.eof())
                return (1);
            if(input == "EXIT")
            {
                std::cout << "Exiting..." << std::endl;
                break;
            }
            else if(input == "ADD")
                phonebook.add_contact();
            else if(input == "SEARCH")
                phonebook.search_contact();
           else
                std::cout << "Error!: Invalid command!" << std::endl;
        }
    }
    return (0);
}
