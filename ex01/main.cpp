/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:37:43 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/17 19:59:48 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int main()
{
	PhoneBook	Agenda;
	
	std::string	command;
	int			current_contact = 0;
	int			oldest_contact = 0;

	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
			Agenda.add_contact(Agenda, current_contact, oldest_contact);
		else if (!command.compare("SEARCH"))
			Agenda.search_contact(current_contact, Agenda);
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
	return (0);
}
