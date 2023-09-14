/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:40:20 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/14 11:09:19 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>
# include <cstdlib>

class PhoneBook {
	private:
		Contact	_contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);

		Contact &getContact(int index);

		void	setContact(int index);
		void	add_contact(PhoneBook &Agenda, int &current_contact, int &oldest_contact);
		void	search_contact(int &current_contact, PhoneBook &Agenda);
};

#endif
