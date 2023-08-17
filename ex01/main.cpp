/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:02:07 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/17 19:13:58 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string command;

	while (command.compare("EXIT"))
	{
		std::cout << "Enter the command (ADD, SEARCH or EXIT)";
		getline(std::cin, command);
		
		if (!command.compare("ADD"))
			std::cout << "Add" << std::endl;
		else if (!command.compare("SEARCH"))
			std::cout << "Search" << std::endl;
		else
			std::cout << "Wrong command, please digit a valid command!" << std::endl;
	}
}
