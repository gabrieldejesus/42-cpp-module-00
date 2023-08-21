/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 17:37:30 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/08/21 11:42:34 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "\e[1;42m⚡ Constructor\e[0m Contact called!" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "\e[1;31m⚡ Destructor\e[0m Contact called!" << std::endl;
}
