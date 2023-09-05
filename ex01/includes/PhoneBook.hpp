/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:05:50 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/05 14:14:20 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
#include <iomanip> // std::setw
#include <cstdlib> // std::system, std::exit
# include "Contact.hpp"
# include "utils.hpp"

/* Colours */
# define ORIGINAL		"\e[0m"
# define RED			"\e[0;31m"
# define GREEN			"\e[0;32m"
# define YELLOW			"\e[0;33m"
# define BLUE			"\e[0;34m"
# define MAGENTA		"\e[0;35m"
# define CYAN			"\e[0;36m"


class PhoneBook
{
  private:
    Contact contacts[8];
    int index;
    

  public:
    // Constructor
    PhoneBook(void);

    // Destructor
    ~PhoneBook(void);

    // Methods
    int get_valid_index(std::string prompt);
    std::string get_valid_input(std::string prompt);
    std::string get_valid_phone_nbr(std::string prompt);
    Contact create_contact(void);
    void add_contact(void);
    void search_and_display_contact(void);
    void display_contact_list(void);
    int search_contact(void);
};

#endif

