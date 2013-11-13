/**   @file address_book.cpp    
      @author Harry Kran-Annexstein
      @date 09-26-2013
      
      Contains the implemtnation for the AddressBook class, see
      address_book.h for the interface defintion.
      */

#include "contact.h"
#include "address_book.h"
#include <iostream>
#include <string>

using namespace std;

AddressBook::AddressBook(const string& name) {
	bookName = name;
}

void AddressBook::addContact(const Contact& newContact) {
	book.push_back((Contact*)&newContact);
}

Contact* AddressBook::getContact(unsigned i) {
	if (i >= book.size()) {
		return (Contact*)NULL;
	}
	else { 
		return book[i];
	}
}

string AddressBook::getBookName() {
	return bookName;
}

int AddressBook::getBookSize() {
	return book.size();
}

