/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:05:50 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/08/31 19:16:52 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iostream>
#include <iomanip> // std::setw
# include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
    int index;
    

  public:
    PhoneBook(void);
    ~PhoneBook(void);
    int add_contact(void);
    int search_contact(void);
};

#endif

