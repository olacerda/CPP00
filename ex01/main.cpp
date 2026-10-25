/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:51:21 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 18:01:11 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "Phonebook.hpp"

#include <stdio.h>

int	main(void)
{
	Phonebook	phonebook;
	std::string user_input;
	int			index;

	index = 0;
	while (1)
	{
		std::cout << "Commands: ADD / SEARCH / EXIT" << std::endl;
		if (!std::getline(std::cin, user_input))
			break;
		if (user_input == "ADD")
		{
			if (index >= 8)
				index = 0;
			if (phonebook.add(index))
				index++;
		}
		else if (user_input == "SEARCH")
		{
			if (!phonebook.search())
				break;
		}
		else if (user_input == "EXIT")
			phonebook.exit();
	}
}