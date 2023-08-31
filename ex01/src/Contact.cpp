/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:49:39 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/08/31 19:28:52 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::set_first_name(std::string first_name)
{
    this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
    this->nickname = nickname;
}

void Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
}

void Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
}

std::string Contact::get_first_name(void)
{
    return (this->first_name);
}

std::string Contact::get_last_name(void)
{
    return (this->last_name);
}

std::string Contact::get_nickname(void)
{
    return (this->nickname);
}

std::string Contact::get_phone_number(void)
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret(void)
{
    return (this->darkest_secret);
}

void Contact::display_contact(void)
{
    std::cout << "First Name: " << this->first_name << std::endl;
    std::cout << "Last Name: " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}