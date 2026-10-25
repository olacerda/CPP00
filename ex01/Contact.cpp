/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otlacerd <otlacerd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 08:50:00 by otlacerd          #+#    #+#             */
/*   Updated: 2026/10/25 18:37:04 by otlacerd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int	Contact::add_information(int index)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	this->index = index;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);
	if (first_name.empty())
		return 0;

	std::cout << "Last name: ";
	std::getline(std::cin, last_name);
	if (last_name.empty())
		return 0;

	std::cout << "Nick name: ";
	std::getline(std::cin, nick_name);
	if (nick_name.empty())
		return 0;

	std::cout << "Phone number: ";
	std::getline(std::cin, phone_number);
	if (phone_number.empty())
		return 0;

	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkest_secret);
	if (darkest_secret.empty())
		return 0;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nick_name = nick_name;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
	return 1;
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
		std::cout << std::endl;		
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
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}
