/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:11:48 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/04 17:36:12 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.hpp"

std::string get_input(std::string prompt)
{
	std::string input;
    
	std::cout << YELLOW << prompt << ORIGINAL;
	std::cin.clear();
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
	return (input);
}

bool	str_is_only_whitespace(const std::string &str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (!std::isspace(str[i]))
			return (false);
		i++;
	}
	return (true);
}

bool	str_is_valid_phone_nbr(const std::string &str)
{
	int i;

	if (str[0] == '+')
		i = 1;
	else
		i = 0;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (false);
		i++;
	}
	if (i > 19 || i == 0)
		return (false);
	return (true);
}