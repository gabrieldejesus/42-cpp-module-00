/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:07 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/23 09:58:54 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook	InstancePhoneBook;
	std::string command;
	int			counter;
	
	counter = 0;	
	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
		{
			InstancePhoneBook.InstanceContact[counter] = Contact::getData();
			Contact::showData(InstancePhoneBook.InstanceContact[counter]);
			counter++;
		}	
		else if (!command.compare("SEARCH"))
			std::cout << "Search" << std::endl;
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
}
