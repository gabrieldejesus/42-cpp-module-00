/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DisplayInfo.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:36:42 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/01 18:36:42 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_INFO_HPP
# define DISPLAY_INFO_HPP

#include "PhoneBook.hpp"

void display_contacts(int index, int &contacts, PhoneBook &InstancePhoneBook);
void display_contact(int index, PhoneBook &InstancePhoneBook);

#endif
