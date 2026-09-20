/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 04:51:12 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/09 08:43:10 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	int		line;
	int		index;

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		{
			line = 1;
			while (line < argc)
			{
				index = 0;
				while (argv[line][index])
				{
					if (std::isalpha(argv[line][index]))
						std::cout << (char)std::toupper(argv[line][index]);
					else
						std::cout << (char)argv[line][index];
					index++;
				}
				line++;
				if ((line + 1) < argc)
					std::cout << ' ';
			}
		}	
	std::cout << "\n";
	return (0);
}
