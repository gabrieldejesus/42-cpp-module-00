/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-jesu <gde-jesu@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:47:54 by gde-jesu          #+#    #+#             */
/*   Updated: 2023/09/09 19:02:41 by gde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	
	int x = 1;
	
	while (argv[x])
	{
		int y = 0;
		
		while (argv[x][y])
		{	
			std::cout << (char)toupper(argv[x][y]);
			y++;
		}
		x++;
	}
	
	std::cout << std::endl;
	
	return (0);
}
