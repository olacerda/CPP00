/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:51:13 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 18:00:15 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"
# include <stdlib.h>

class Phonebook
{
	private:
		Contact contacts[8];

	public:
		int add(int index);
		int search();
		int check_number(std::string number);
		void exit();
};

#endif