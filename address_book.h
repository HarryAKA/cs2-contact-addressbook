/**   @file address_book.h    
      @author Harry Kran-Annexstein
      @date 09-26-2013
      
      Class definition for the AddressBook class, represents a a digitial address book.
      */

#ifndef ADDRESS_BOOK_H
#define ADDRESS_BOOK_H

#include <contact.h>
#include <string>
#include <vector>

class AddressBook {
public:
	AddressBook(const string& name);
  /**
   * @param newContact the contact to be added
   * @return the index of the new contact
   */
  void addContact(const Contact& newContact);

  /**
   * @param i, the index of the contact to retrieve
   * @return a reference to the contact at that spot
   */
  Contact* getContact(unsigned i);

	string getBookName();

	int getBookSize();

private:
	vector<Contact*> book;
	string bookName;
};

#endif
