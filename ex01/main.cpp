/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:37:43 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 20:24:23 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	Contacts;
	std::string	command;

	while (command.compare("EXIT") || command.compare("exit"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD") || !command.compare("add"))
			std::cout << "add contact" << std::endl;
		else if (!command.compare("SEARCH") || !command.compare("search"))
			std::cout << "search contact" << std::endl;
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
	return (0);
}