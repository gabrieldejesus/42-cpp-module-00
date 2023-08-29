/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:07 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/29 10:48:27 by gde-jesu         ###   ########.fr       */
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
	int	index = 0;


	std::cout << std::left << std::setw(10) << (InstancePhoneBook.InstanceContact[index].firstName.length() > 10 ? InstancePhoneBook.InstanceContact[index].firstName.substr(0, 10) + "." : InstancePhoneBook.InstanceContact[index].firstName) << std::endl;
    
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "| " << "index" << " | " << "first name" << " | " << "last name" << " | " << "nickname" << " |" << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	while (index < contacts)
	{
		std::cout << "| " << index << " | ";
		std::cout << InstancePhoneBook.InstanceContact[index].firstName << " | ";
		std::cout << InstancePhoneBook.InstanceContact[index].lastName << " | ";
		std::cout << InstancePhoneBook.InstanceContact[index].nickname << " |" << std::endl;
		index++;
	}
	std::cout << "+-------------------------------------------+" << std::endl;
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
