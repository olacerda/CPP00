/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:50:02 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/20 15:12:29 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

void	Phonebook::add(int index)
{
	this->contacts[index].add_information(index);
}

void	Phonebook::search()
{
	std::string number;
	int	index;

	index = 0;
	std::cout << "     index|first name| last name| nick name\n";
	while (index < 8)
	{
		this->contacts[index].display_information();
		index++;
	}
	while (1)
	{
		std::cout << "Display: ";
		std::getline(std::cin, number);
		if (number.length() != 1 || number[0] < 48 || number[0] > 55)
		{
			std::cout << "Expected a valid number, please try again\n";
			continue ;
		}
		break ;
	}
	this->contacts[number[0] - '0'].display_all_information();
}

void	Phonebook::exit()
{
	std::exit(0);
}
