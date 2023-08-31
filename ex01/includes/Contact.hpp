/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:28:40 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/08/31 18:02:47 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
  private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

  public:
	Contact(void);
	~Contact(void);
	void set_first_name(std::string first_name);
	void set_last_name(std::string last_name);
	void set_nickname(std::string nickname);
	void set_phone_number(std::string phone_number);
	void set_darkest_secret(std::string darkest_secret);

	std::string get_first_name(void);
	std::string get_last_name(void);
	std::string get_nickname(void);
	std::string get_phone_number(void);
	std::string get_darkest_secret(void);
	void display_contact(void);
};

#endif