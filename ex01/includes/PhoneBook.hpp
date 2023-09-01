/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:05:50 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/01 20:06:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
#include <iomanip> // std::setw
#include <cstdlib> // std::system, std::exit
# include "Contact.hpp"

/* Colors */

# define ORIGINAL		"\e[0m"
# define RED			"\e[0;31m"
# define L_RED			"\e[0;38;5;9m"
# define GREEN			"\e[0;32m"
# define D_GREEN		"\e[0;38;5;22m"

class PhoneBook
{
  private:
    Contact contacts[8];
    int index;
    

  public:
    PhoneBook(void);
    ~PhoneBook(void);
    std::string get_valid_index(std::string prompt, int index);
    std::string get_valid_input(std::string prompt);
    std::string get_valid_phone_nbr(std::string prompt);
    Contact create_contact(void);
    void add_contact(void);
    int search_contact(void);
};

#endif

