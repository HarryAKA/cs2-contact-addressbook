/**   @file addres_book_test.h    
      @author Harry Kran-Annexstein
      @date 09-26-2013
      
      Unit tests for the AddressBook class.
      */
      
#ifndef ADDRESS_BOOK_TEST_H
#define ADDRESS_BOOK_TEST_H

#include <address_book.h>
#include <contact.h>

#include <string>

#include <cxxtest/TestSuite.h>

using namespace std;

class AddressBookTest : public CxxTest::TestSuite {
public:
	void testConstructor() {
		string name = "Test";
		AddressBook book(name);
		TS_ASSERT_EQUALS(name, book.getBookName());
	}
  void testAddContacts() {
    AddressBook book("Simpsons");
    Contact contact("Homer Simpson");
		book.addContact(contact);
    // Address book size should be one
    TS_ASSERT_EQUALS(1, book.getBookSize());	
	}
	void testAdd2Contacts() {
    string name = "Homer Simpson";
    AddressBook book("Simpsons");
    Contact contact(name);
    string name1 = "Marge Simpson";
    Contact contact1(name1);
		book.addContact(contact);
		book.addContact(contact1);
    // Address book size should be two
    TS_ASSERT_EQUALS(2, book.getBookSize());
	}
	void testGetContact() {		
    string name0 = "Homer Simpson";
    AddressBook book("Simpsons");
    Contact contact0(name0);	
 		book.addContact(contact0);
    string name1 = "Marge Simpson";
    Contact contact1(name1);
		book.addContact(contact1);
		// Should retun contact0 pointer. 
		TS_ASSERT_EQUALS(book.getContact(0), &contact0);
	}	
	void testGetContactNULL() {	
    string name0 = "Homer Simpson";
    AddressBook book("Simpsons");
    Contact contact0(name0);	
 		book.addContact(contact0);
    string name1 = "Marge Simpson";
    Contact contact1(name1);
		book.addContact(contact1);
		// Should return NULL contact pointer. 
		TS_ASSERT_EQUALS(book.getContact(20), (Contact*)NULL);
	}
};

#endif
