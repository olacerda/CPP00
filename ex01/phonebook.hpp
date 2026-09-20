/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:51:13 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/17 00:59:14 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "contact.hpp"
# include <stdlib.h>

class Phonebook
{
	private:
		Contact contacts[8];

	public:
		void add(int index);
		void search();
		int check_number(std::string number);
		void exit();
};

#endif