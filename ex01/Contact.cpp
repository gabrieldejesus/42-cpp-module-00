/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:37:30 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/14 08:05:56 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "\e[32mConstructor\e[0m Contact called!" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "\e[33mDestructor\e[0m Contact called!" << std::endl;
}

std::string	Contact::getFirstName() {
    return _firstName;
}

std::string	Contact::getLastName() {
    return _lastName;
}

std::string	Contact::getNickname() {
    return _nickname;
}

std::string	Contact::getPhoneNumber() {
    return _phoneNumber;
}

std::string	Contact::getDarkestSecret() {
    return _darkestSecret;
}

void		Contact::setFirstName(std::string firstName) {
    _firstName = firstName;
}

void		Contact::setLastName(std::string lastName) {
    _lastName = lastName;
}

void		Contact::setNickname(std::string nickname) {
    _nickname = nickname;
}

void		Contact::setPhoneNumber(std::string phoneNumber) {
    _phoneNumber = phoneNumber;
}

void		Contact::setDarkestSecret(std::string darkestSecret) {
    _darkestSecret = darkestSecret;
}