/**   @file contact_test.h    
      @author Harry Kran-Anexstein
      @date 09-26-2013
      
      Contains unit tests for the Contact class.
      */
      
#ifndef CONTACT_TEST_H
#define CONTACT_TEST_H

#include "contact.h"
#include "number.h"
#include <string>

#include <cxxtest/TestSuite.h>

using namespace std;

class ContactTest : public CxxTest::TestSuite {
public:
	void testConstructor() {	
    string name = "Bart Simpson";
    Contact c(name);
		// Should confirm contact name assigned. 
		TS_ASSERT_EQUALS(name, c.getContactName());
	}
	void testAddNumber() {
    string name = "Bart Simpson";
    Contact c(name);
		Number n("Work","+15135555555");
		c.addNumber(n);
		// Should confirm 1 Number addedn to contact.
		TS_ASSERT_EQUALS(1, c.getNumberCount());
	}
  void testAdd2Numbers() {
    string name = "Bart Simpson";
    Contact c(name);
		Number n("Work","+15135555555");
		c.addNumber(n);
		Number n2("Home","+115135555555");
		c.addNumber(n2);
		// Should confirm 2 numbers added to contact. 
    TS_ASSERT_EQUALS(2, c.getNumberCount());
  }
  void testGetContactNumber() {	
    string name = "Bart Simpson";
    Contact c(name);
		Number n("Work","+15135555555");
		c.addNumber(n);
		// Should return Number n pointer.
		TS_ASSERT_EQUALS(&n, c.getContactNumber(0));
	}
	void testGetContactNumberNULL() {		
    string name = "Bart Simpson";
    Contact c(name);
		Number n("Work","+15135555555");
		c.addNumber(n);
		// Should return NULL Number pointer. 
		TS_ASSERT_EQUALS((Number*)NULL, c.getContactNumber(10));
	}
};

#endif
