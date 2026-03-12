#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

static std::string	readField(const std::string &prompt) {
	std::string	input;

	while (true) {
		std::cout << prompt;
		if (!std::getline(std::cin, input))
		{
			std::cout << "Exiting..." << std::endl;
			exit(0);
		}
		if (!input.empty())
			return input;
		std::cout << "Field cannot be empty. Try again :)" << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	PhoneBook 	Phone;
	std::string command;
	int			index;

	while (true)
	{
		std::cout << "command: ";
		if (!std::getline(std::cin, command))
		{
			std::cout << "Exiting..." << std::endl;
			break ;
		}

		if (command == "ADD")
		{
			std::string
			Phone.addContact();
		}
		else if (command == "SEARCH")
		{
			Phone.displayList();
			std::cout << "insert index: ";
			std::cin >> index;
			Phone.searchContact(index);
		}
		else if (command == "EXIT")
			break ;
		else
			std::cout << "Insert a command valid" << std::endl;
	}
	(void ) argc;
	(void ) argv;
	return (0);
}
