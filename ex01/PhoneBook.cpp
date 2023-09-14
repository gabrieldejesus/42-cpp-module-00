/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:23:36 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/14 11:09:46 by gde-jesu         ###   ########.fr       */
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

Contact	&PhoneBook::getContact(int index)
{
	return (_contacts[index]);
}

void	PhoneBook::setContact(int index)
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	while (firstName.empty())
	{
		std::cout << "Type the contact first name:" << std::endl;
		getline(std::cin, firstName);
		_contacts[index].setFirstName(firstName);
	}
	
	while (lastName.empty())
	{
		std::cout << "Type the contact last name:" << std::endl;
		getline(std::cin, lastName);
		_contacts[index].setLastName(lastName);
	}
	
	while (nickname.empty())
	{
		std::cout << "Type the contact nickname:" << std::endl;
		getline(std::cin, nickname);
		_contacts[index].setNickname(nickname);
	}
	
	while (phoneNumber.empty())
	{
		std::cout << "Type the contact phone number:" << std::endl;
		getline(std::cin, phoneNumber);
		_contacts[index].setPhoneNumber(phoneNumber);
	}
	
	while (darkestSecret.empty())
	{	
		std::cout << "Type the contact darkest secret:" << std::endl;
		getline(std::cin, darkestSecret);
		_contacts[index].setDarkestSecret(darkestSecret);
	}
}

void	PhoneBook::add_contact(PhoneBook &Agenda, int &current_contact, int &oldest_contact)
{
	if (current_contact <= 7)
	{
		Agenda.setContact(current_contact);
		current_contact++;
	} else {
		Agenda.setContact(oldest_contact);
		oldest_contact++;
		if (oldest_contact % 8 == 0)
			oldest_contact = 0;
	}
	std::cout << "Contact successfully added!" << std::endl;
}

void	print_contact_line(std::string str, bool full = false)
{
  if (!full)
  {
    if (str.length() > 10)
      std::cout << std::right << std::setw(10) << str.substr(0, 9) + "." << " | ";
    else
      std::cout << std::right << std::setw(10) << str << " | ";
  } else 
    std::cout << std::right << str << " | " << std::endl;
}

std::string	intToString(int number) {
	std::string	result;

	if (number == 0)
		result = "0";
	else {
		bool isNegative = false;

		if (number < 0) {
			isNegative = true;
			number = -number;
		}

		while (number > 0)
		{
			char digit = '0' + (number % 10);
			
			result = digit + result;
			number /= 10;
		}

		if (isNegative)
			result = "-" + result;
	}
	return result;
}

void	display_contacts(int current_contact, PhoneBook &Agenda) {
	int index = 0;

	std::cout << "+---------------------------------------------------+" << std::endl;
	std::cout << "| ";
	print_contact_line("index");
	print_contact_line("first name");
	print_contact_line("last name");
	print_contact_line("nickname");
	std::cout << std::endl;
	std::cout << "+---------------------------------------------------+" << std::endl;
	
	while (index < current_contact)
	{
		std::cout << "| ";
		print_contact_line(intToString(index));
		print_contact_line(Agenda.getContact(index).getFirstName());
		print_contact_line(Agenda.getContact(index).getLastName());
		print_contact_line(Agenda.getContact(index).getNickname());
		std::cout << std::endl;
		index++;
	}

	std::cout << "+---------------------------------------------------+" << std::endl;
}

int		take_largest_size(int values[5])
{
  int largest = 0;

  for (int i = 0; i < 5; i++)
  {
    if (values[i] > largest)
      largest = values[i];
  }

  return largest;
}

void	display_contact(int index, PhoneBook &Agenda) {
  int keep_1 = 0;
  int keep_2 = 0;

  int values[5] = {
    Agenda.getContact(index).getFirstName().size(),
    Agenda.getContact(index).getLastName().size(),
    Agenda.getContact(index).getNickname().size(),
    Agenda.getContact(index).getPhoneNumber().size(),
    Agenda.getContact(index).getDarkestSecret().size()
  };

  int largest_size = take_largest_size(values);

  std::cout << "+-------------------";
  
  while (largest_size > keep_1)
  {
    std::cout << "-";
    keep_1++;
  }
  std::cout << "+" << std::endl;
  std::cout << "| index          | " << std::right << std::setw(largest_size) << index << " |" << std::endl;
  std::cout << "| first name     | " << std::right << std::setw(largest_size) << Agenda.getContact(index).getFirstName() << " |" << std::endl;
  std::cout << "| last name      | " << std::right << std::setw(largest_size) << Agenda.getContact(index).getLastName() << " |" << std::endl;
  std::cout << "| nickname       | " << std::right << std::setw(largest_size) << Agenda.getContact(index).getNickname() << " |" << std::endl;
  std::cout << "| phone number   | " << std::right << std::setw(largest_size) << Agenda.getContact(index).getPhoneNumber() << " |" << std::endl;
  std::cout << "| darkest secret | " << std::right << std::setw(largest_size) << Agenda.getContact(index).getDarkestSecret() << " |" << std::endl;
  std::cout << "+-------------------";

  while (largest_size > keep_2)
  {
    std::cout << "-";
    keep_2++;
  }
  
  std::cout << "+" << std::endl;
}

void	PhoneBook::search_contact(int &current_contact, PhoneBook &Agenda)
{
  	std::string	index_selected;

	if (current_contact == 0)
	{
		std::cout << "No contacts saved, please ADD a contact before searching." << std::endl;
		return ;
	}
	
	display_contacts(current_contact, Agenda);

	std::cout << "Enter the index of the contact you want to see or digit BACK to return to list of commands." << std::endl;
	getline(std::cin, index_selected);

	while (index_selected.size() != 1 ||
		index_selected.empty() ||
		index_selected.find_first_not_of("0123456789") != std::string::npos ||
		std::atof(index_selected.c_str()) >= current_contact
	)
	{
		if (index_selected == "BACK")
			return;
		std::cout << "Wrong index, please digit a valid index or digit BACK to return to list of commands." << std::endl;
		getline(std::cin, index_selected);
	}
	display_contact(std::atof(index_selected.c_str()), Agenda);
}
