/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 16:40:20 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 15:47:24 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook(void);
		Contact InstanceContact[8];
		~PhoneBook(void);
};

#endif
