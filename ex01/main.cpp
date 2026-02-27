/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlavared <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:06:38 by tlavared          #+#    #+#             */
/*   Updated: 2026/01/29 14:58:10 by tlavared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(int argc, char *argv[])
{
	PhoneBook 	Phone;
	std::string command;
	int			index;

	while (true)
	{
		std::cout << "command: ";
		std::cin >> command;
		std::cout << std::endl;
		if (command == "ADD")
			Phone.addContact();
		if (command == "SEARCH")
		{
			Phone.displayList();
			std::cout << "insert index: ";
			std::cin >> index;
			Phone.searchContact(index);
		}
		if (command == "EXIT")
			break ;
	}
	(void ) argc;
	(void ) argv;
	return (0);
}
