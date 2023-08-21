/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:07 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/21 11:43:26 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	InstancePhoneBook;
	std::string command;
	
	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
		{
			InstancePhoneBook.InstanceContact[0] = Contact::getData();
			Contact::showData(InstancePhoneBook.InstanceContact[0]);
			
			// InstanceContact = Contact::getData();
			// InstancePhoneBook.InstanceContact[0].showData();
		}	
		else if (!command.compare("SEARCH"))
			std::cout << "Search" << std::endl;
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
}
