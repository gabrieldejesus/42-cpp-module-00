/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayInfo.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:36:31 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/01 18:36:33 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DisplayInfo.hpp"

void print_contact_line(std::string str, bool full = false)
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

int take_largest_size(int values[5])
{
  int largest = 0;
  for (int i = 0; i < 5; i++)
  {
    if (values[i] > largest)
      largest = values[i];
  }
  return largest;
}

void display_contacts(int index, int &contacts, PhoneBook &InstancePhoneBook) {
  std::cout << "+---------------------------------------------------+" << std::endl;
  std::cout << "| ";
  print_contact_line("index");
  print_contact_line("first name");
  print_contact_line("last name");
  print_contact_line("nickname");
  std::cout << std::endl;
	std::cout << "+---------------------------------------------------+" << std::endl;
  while (index < contacts)
  {
    std::cout << "| ";
    print_contact_line(std::to_string(index));
    print_contact_line(InstancePhoneBook.InstanceContact[index].firstName);
    print_contact_line(InstancePhoneBook.InstanceContact[index].lastName);
    print_contact_line(InstancePhoneBook.InstanceContact[index].nickname);
    std::cout << std::endl;
    index++;
  }
	std::cout << "+---------------------------------------------------+" << std::endl;
}

void display_contact(int index, PhoneBook &InstancePhoneBook) {
  int keep_1 = 0;
  int keep_2 = 0;
  
  int values[5] = {
    InstancePhoneBook.InstanceContact[index].firstName.size(),
    InstancePhoneBook.InstanceContact[index].lastName.size(),
    InstancePhoneBook.InstanceContact[index].nickname.size(),
    InstancePhoneBook.InstanceContact[index].phoneNumber.size(),
    InstancePhoneBook.InstanceContact[index].darkestSecret.size()
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
  std::cout << "| first name     | " << std::right << std::setw(largest_size) << InstancePhoneBook.InstanceContact[index].firstName << " |" << std::endl;
  std::cout << "| last name      | " << std::right << std::setw(largest_size) << InstancePhoneBook.InstanceContact[index].lastName << " |" << std::endl;
  std::cout << "| nickname       | " << std::right << std::setw(largest_size) << InstancePhoneBook.InstanceContact[index].nickname << " |" << std::endl;
  std::cout << "| phone number   | " << std::right << std::setw(largest_size) << InstancePhoneBook.InstanceContact[index].phoneNumber << " |" << std::endl;
  std::cout << "| darkest secret | " << std::right << std::setw(largest_size) << InstancePhoneBook.InstanceContact[index].darkestSecret << " |" << std::endl;
	std::cout << "+-------------------";
  while (largest_size > keep_2)
  {
    std::cout << "-";
    keep_2++;
  }
  std::cout << "+" << std::endl;
}
