/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:50:02 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 18:15:55 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

int	Phonebook::add(int index)
{
	if (!this->contacts[index].add_information(index))
		return 0;
	return 1;
}

int	Phonebook::search()
{
	std::string number;

	std::cout << "     index|first name| last name| nick name\n" << std::endl;
	for (int index = 0; index < 8; index++)
	{
		this->contacts[index].display_information();
	}
	for(;;)
	{
		std::cout << "Display: " << std::endl;
		if (!std::getline(std::cin, number))
			return 0;
		if (number.length() != 1 || number[0] < 48 || number[0] > 55)
		{
			std::cout << "Expected a valid number, please try again\n" << std::endl;
			continue ;
		}
		break ;
	}
	this->contacts[number[0] - '0'].display_all_information();
	return 1;
}

void	Phonebook::exit()
{
	std::exit(0);
}
