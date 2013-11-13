/**   @file Contact.h    
      @author Harry Kran-Annexstein
      @date 09-26-2013
      
      Contains the interface for the Contact class. The contact class
      represents a single contact in a digital address book.
      */

#ifndef CONTACT_H
#define CONTACT_H

#include <number.h>
#include <string>
#include <vector>

using namespace std;

class Contact {
public:
   // Creates a new contact with string name.
  Contact(const string& name);

	// Adds number and associated label to contact object.
	void addNumber(const Number& num);  

	Number* getContactNumber(unsigned i);	

	int getNumberCount();

	string getContactName();

private:
	string contactName;
	vector<Number*> numbers;
};

#endif
