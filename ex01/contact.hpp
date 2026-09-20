/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:51:11 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/17 00:35:03 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>

	class Contact
	{
		private:
			int			index;
			std::string first_name;
			std::string	last_name;
			std::string nick_name;
			std::string phone_number;
			std::string darkest_secret;

		public:
			void add_information(int index);
			void display_information();
			void display_all_information();
	};

#endif