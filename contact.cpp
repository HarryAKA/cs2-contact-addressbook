/**   @file contact.cpp    
      @author Harry Kran-Annexstein
      @date 09-26-2013
      
      Contains the implemntation for the Contact class, see
      contact.h for the interface.
      */

#include "number.h"
#include "contact.h"
#include <iostream>

Contact::Contact(const string& name) {
	contactName = name;
}

void Contact::addNumber(const Number& newNum) {
	numbers.push_back((Number*)&newNum);
}

Number* Contact::getContactNumber(unsigned i) {
	if (i >= numbers.size()) {
		return (Number*)NULL;
	}
	else {
		return numbers[i];
	}
}

int Contact::getNumberCount() {
	return numbers.size();
}

string Contact::getContactName() {
	return contactName;
}

