#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_len = 0;
	_index = 0;
}

void PhoneBook::addContact()
{
	Contact contact;

	std::string number, nickname, secret, first, last;

	std::cout << "number: ";
	std::cin >> number;
	
	std::cout << "nickname: ";
	std::cin >> nickname;
	
	std::cout << "secret: ";
	std::cin >> secret;
	
	std::cout << "first: ";
	std::cin >> first;
	
	std::cout << "last: ";
	std::cin >> last;

	_list_contact[_index].setContact(number, nickname, secret, first, last);
	_index = (_index + 1) % 8;
	if (_len < 8)
		_len++;
}

void PhoneBook::searchContact(int index) const
{
	if (index >=0 && index < _len)
		_list_contact[index].printContact();
	else
		std::cout << "Invalid Contact" << std::endl;
}

void PhoneBook::displayList() const
{

}
