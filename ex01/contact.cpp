/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:50:00 by otlacerd          #+#    #+#             */
/*   Updated: 2026/09/17 01:20:22 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	Contact::add_information(int index)
{
	std::getline(std::cin, this->first_name);
	std::getline(std::cin, this->last_name);
	std::getline(std::cin, this->nick_name);
	std::getline(std::cin, this->phone_number);
	std::getline(std::cin, this->darkest_secret);
	this->index = index;
}

void	show_ten_characters(std::string string, int pipe)
{
	std::string temp;

	temp = string;
	if (temp.length() > 10)
	{
		temp = temp.substr(0, 9);
		temp += ".";
	}
	std::cout << std::setw(10) << temp;
	if (pipe)
		std::cout << "|";
}

void	Contact::display_information()
{
	if (this->first_name != "")
	{
		std::cout << std::setw(10) << this->index << "|";
		show_ten_characters(this->first_name, 1);
		show_ten_characters(this->last_name, 1);
		show_ten_characters(this->nick_name, 0);
		std::cout << "\n";		
	}
}

void	Contact::display_all_information()
{
	if (this->first_name == "")
	{
		std::cout << "This contact is empty\n";
		return ;
	}
	std::cout << "index: " << this->index << "\n";
	std::cout << "first name: " << this->first_name << "\n";
	std::cout << "last name: " << this->last_name << "\n";
	std::cout << "nick name: " << this->nick_name << "\n";
	std::cout << "phone number: " << this->phone_number << "\n";
	std::cout << "darkest secret: " << this->darkest_secret << "\n";
}
