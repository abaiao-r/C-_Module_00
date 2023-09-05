/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:49:39 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/05 13:56:50 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

/* Constructor - Initialize member variables,
 * called when a Contact object is created
 * (This constructor doesn't perform any specific initialization) */
Contact::Contact(void)
{
}

/* Destructor - Called when a Contact object is destroyed,
 * typically used for cleanup.
 * (This destructor doesn't require any cleanup)*/
Contact::~Contact(void)
{
}

/* Setter for the first name member variable */
void Contact::set_first_name(std::string first_name)
{
	this->first_name = first_name;
}

/* Setter for the last name member variable */
void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

/* Setter for the nickname member variable */
void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

/* Setter for the phone number member variable */
void Contact::set_phone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

/* Setter for the darkest secret member variable */
void Contact::set_darkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

/* Getter for the first name member variable */
std::string Contact::get_first_name(void)
{
	return (this->first_name);
}

/* Getter for the last name member variable */
std::string Contact::get_last_name(void)
{
	return (this->last_name);
}

/* Getter for the nickname member variable */
std::string Contact::get_nickname(void)
{
	return (this->nickname);
}

/* Getter for the phone number member variable */
std::string Contact::get_phone_number(void)
{
	return (this->phone_number);
}

/* Getter for the darkest secret member variable */
std::string Contact::get_darkest_secret(void)
{
	return (this->darkest_secret);
}

/* Funtion to display the contact information to the console */
void Contact::display_contact(void)
{
	std::cout << "First Name: " << this->first_name << std::endl;
	std::cout << "Last Name: " << this->last_name << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone Number: " << this->phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
}