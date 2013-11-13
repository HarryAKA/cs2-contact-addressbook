/**   @file number.cpp
			@author Harry Kran-Annexstein
			@date 09-29-2013

			Contains the implementation for the Number class, see number.h for
			the interface definition.
			*/

#include "number.h"
#include <string>
using namespace std;

Number::Number(const string& id, const string& num) {
	label = id;
	number = num;
}

string Number::getNumber() {
	return number;
}

string Number::getLabel() {
	return label;
}
