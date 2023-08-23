/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:23:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/23 13:16:14 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\e[1;42m⚡ Constructor\e[0m PhoneBook called!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\e[1;31m⚡ Destructor\e[0m PhoneBook called!" << std::endl;
}
