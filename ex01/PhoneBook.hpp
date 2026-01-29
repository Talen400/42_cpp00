#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	private:
		Contact _list_contact[8];
		int		_len;
		int		_index;

	public:
		PhoneBook();
		void	addContact();
		void	searchContact(int index) const;
		void	displayList() const;
};

#endif
