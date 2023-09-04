/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:21:47 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/04 17:33:41 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include "PhoneBook.hpp"

std::string get_input(std::string prompt);
bool	    str_is_only_whitespace(const std::string &str);
bool	    str_is_valid_phone_nbr(const std::string &str);

#endif