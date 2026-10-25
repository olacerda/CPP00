/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 04:51:12 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 17:23:01 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{

	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		{
			for (int line = 1; line < argc; line++)
			{
				for (int index = 0; argv[line][index]; index++)
				{
					if (std::isalpha(argv[line][index]))
						std::cout << static_cast<char>(std::toupper(argv[line][index]));
					else
						std::cout << (char)argv[line][index];
				}
				if ((line + 1) < argc)
					std::cout << ' ';
			}
		}	
	std::cout << std::endl;
	return (0);
}
