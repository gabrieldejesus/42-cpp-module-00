/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:37:43 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/13 16:58:46 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	Contacts;
	std::string	command;

	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
			std::cout << "add contact" << std::endl;
		else if (!command.compare("SEARCH"))
			std::cout << "search contact" << std::endl;
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
	return (0);
}