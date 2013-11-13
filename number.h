/**   @file number.h
			@author Harry Kran-Annexstein
			@date 09-29-2013
	
			Definition for the Number class, represents a single phone number (and label)
			associated with a Contact object. 

			*/

#ifndef NUMBER_H
#define NUMBER_H

#include <string>

using namespace std;

class Number {
public:
	Number(const string& id, const string& num);

	string getNumber();

	string getLabel();

private:
	string label;
	string number;
};

#endif

