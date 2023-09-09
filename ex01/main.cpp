/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:37:43 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 15:24:41 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DisplayInfo.hpp"

void	add_contact(int &contacts, int oldest_contact, PhoneBook &InstancePhoneBook)
{
	if (contacts <= 7)
	{
		InstancePhoneBook.InstanceContact[contacts] = Contact::createContact();
		contacts++;
	} else
	{
		InstancePhoneBook.InstanceContact[oldest_contact] = Contact::createContact();
		oldest_contact++;
		if (oldest_contact % 8 == 0)
			oldest_contact = 0;
	}
}

void	search_contact(int &contacts, PhoneBook &InstancePhoneBook)
{
	int	index = 0;
  std::string index_selected;

  if (contacts == 0)
  {
    std::cout << "No contacts saved, please ADD a contact before searching." << std::endl;
    return;
  }
  
  display_contacts(index, contacts, InstancePhoneBook);

  std::cout << "Enter the index of the contact you want to see or digit BACK to return to list of commands." << std::endl;
  getline(std::cin, index_selected);

  while (index_selected.size() != 1 ||
    index_selected.empty() ||
		index_selected.find_first_not_of("0123456789") != std::string::npos ||
    std::atof(index_selected.c_str()) >= contacts
  )
  {
    if (index_selected == "BACK")
      return;
    std::cout << "Wrong index, please digit a valid index or digit BACK to return to list of commands." << std::endl;
    getline(std::cin, index_selected);
  }
  display_contact(std::atof(index_selected.c_str()), InstancePhoneBook);
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
