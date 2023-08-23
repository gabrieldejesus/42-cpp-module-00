/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:07 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/23 16:11:58 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	add_contact(int &contacts, int oldest_contact, PhoneBook &InstancePhoneBook)
{
	if (contacts <= 7)
	{
		InstancePhoneBook.InstanceContact[contacts] = Contact::getData();
		contacts++;
	} else
	{
		InstancePhoneBook.InstanceContact[oldest_contact] = Contact::getData();
		oldest_contact++;
		if (oldest_contact % 8 == 0)
			oldest_contact = 0;
	}
}

void	search_contact(int &contacts, PhoneBook &InstancePhoneBook)
{
	int	counter = 0;

	while (counter < contacts)
	{
		std::cout << "+-----------------------------------------------------------+" << std::endl;
		std::cout << "| index:" << counter<< std::endl;
		std::cout << "| first name: " << InstancePhoneBook.InstanceContact[counter].firstName << std::endl;
		std::cout << "| last name: " << InstancePhoneBook.InstanceContact[counter].lastName << std::endl;
		std::cout << "| nickname: " << InstancePhoneBook.InstanceContact[counter].nickname << std::endl;
		std::cout << "| phone number: " << InstancePhoneBook.InstanceContact[counter].phoneNumber << std::endl;
		std::cout << "| darkest secret: " << InstancePhoneBook.InstanceContact[counter].darkestSecret << std::endl;
		std::cout << "+-----------------------------------------------------------+" << std::endl;
		counter++;
	}
}

int	main()
{
	PhoneBook	InstancePhoneBook;
	std::string command;
	int			contacts = 0;
	int			oldest_contact = 0;
	
	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
			add_contact(contacts, oldest_contact, InstancePhoneBook);
		else if (!command.compare("SEARCH"))
			search_contact(contacts, InstancePhoneBook);
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
}
