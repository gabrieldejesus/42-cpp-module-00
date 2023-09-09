/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:23:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 20:27:31 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "\e[32mConstructor\e[0m PhoneBook called!" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "\e[33mDestructor\e[0m PhoneBook called!" << std::endl;
}

void	PhoneBook::addContact()
{
	std::cout << "addContact()" << std::endl;
}

void	PhoneBook::listAllContacts()
{
	std::cout << "listAllContacts()" << std::endl;
}