/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:41:06 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/23 11:30:57 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact {
	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

		static Contact getData()
		{
			Contact InstanceContact;
			
			while (InstanceContact.firstName.empty())
			{
				std::cout << "Type the contact first name:" << std::endl;
				getline(std::cin, InstanceContact.firstName);
			}
			while (InstanceContact.lastName.empty())
			{
				std::cout << "Type the contact last name:" << std::endl;
				getline(std::cin, InstanceContact.lastName);
			}
			while (InstanceContact.nickname.empty())
			{
				std::cout << "Type the contact nickname:" << std::endl;
				getline(std::cin, InstanceContact.nickname);
			}
			while (InstanceContact.phoneNumber.empty())
			{
				std::cout << "Type the contact phone number:" << std::endl;
				getline(std::cin, InstanceContact.phoneNumber);
			}
			while (InstanceContact.darkestSecret.empty())
			{	
				std::cout << "Type the contact darkest secret:" << std::endl;
				getline(std::cin, InstanceContact.darkestSecret);
			}
			return InstanceContact;
		}

		static void showData(Contact InstanceContact)
		{
			std::cout << "first name:" << InstanceContact.firstName << std::endl;
			std::cout << "last name: " << InstanceContact.lastName << std::endl;
			std::cout << "nickname: " << InstanceContact.nickname << std::endl;
			std::cout << "phone number: " << InstanceContact.phoneNumber << std::endl;
			std::cout << "darkest secret: " << InstanceContact.darkestSecret << std::endl;
		}

		Contact(void);
		~Contact(void);
};

#endif
