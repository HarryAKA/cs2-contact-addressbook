/**   @file number_test.h
			@author Harry Kran-Annexstein
			@date 09-29-2013

			Contains unit tests for the Number class.
			*/

#ifndef NUMBER_TEST_H
#define NUMBER_TEST_H

#include "number.h"
#include <string>
#include <cxxtest/TestSuite.h>

using namespace std;

class NumberTest : public CxxTest::TestSuite {
public:
	void testConstructor() {
		string id = "Home";
		string num = "+15135555555";
		Number n(id,num);
		TS_ASSERT_EQUALS(n.getLabel(),id);
		TS_ASSERT_EQUALS(n.getNumber(),num); 
	}

};

#endif




