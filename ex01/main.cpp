/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:51:21 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/20 15:06:04 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

#include <stdio.h>

int	main(void)
{
	Phonebook	phonebook;
	std::string user_input;
	int			index;

	index = 0;
	while (1)
	{
		std::getline(std::cin, user_input);
		if (user_input == "ADD")
		{
			if (index >= 8)
				index = 0;
			phonebook.add(index);
			index++;
		}
		else if (user_input == "SEARCH")
			phonebook.search();
		else if (user_input == "EXIT")
			phonebook.exit();
	}
}