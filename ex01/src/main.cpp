/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 14:20:06 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/08/31 19:28:34 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void display_menu(void)
{
    std::cout << "Please type one of the following commands:" << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
}

int main(int ac, char **av)
{
    std::string input;
    PhoneBook phonebook;

    (void)av;
    if(ac != 1)
        std::cout << "Error!: Too many arguments!\n Usage: ./PhoneBook" << std::endl;
    else
    {
        while(1)
        {
            std::cout << "PhoneBook> ";
            display_menu();
            std::getline(std::cin, input);
            std::cin.clear();
            if(input == "EXIT")
            {
                std::cout << "Exiting..." << std::endl;
                break;
            }
            else if(input == "ADD")
                add_contact(phonebook);
            else if(input == "SEARCH")
                search_contact(phonebook);
            else
                std::cout << "Error!: Invalid command!" << std::endl;
        }
    }
    return (0);
}
