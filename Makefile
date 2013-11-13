CC=g++
CCFLAGS=-Wall -ggdb -I.
LDFLAGS=
SOURCES= number.cpp contact.cpp address_book.cpp
TESTS = number_test.h address_book_test.h contact_test.h

OBJECTS=$(SOURCES:.cpp=.o)
OBJECTSTEST=$(OBJECTS)

FLAGS   = -Iinclude

all: $(SOURCES) test
	

# These next lines do a bit of magic found from http://stackoverflow.com/questions/2394609/makefile-header-dependencies
# Essentially it asks the compiler to read the .cpp files and generate the needed .h dependencies.
# This way if any .h file changes the correct .cpp files will be recompiled
depend: .depend

.depend: $(SOURCES)
	rm -f ./.depend
	$(CC) $(CCFLAGS) -MM $^ >> ./.depend;

include .depend
# End .h file magic

.cpp.o:
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	-rm -rf *o testrunner testrunner.cpp
	-rm -f ./.depend

# CXX Testing	
CXXTESTGEN = ./cxxtest/bin/cxxtestgen

test: testrunner
	./testrunner

testrunner: testrunner.cpp $(OBJECTSTEST)
	$(CC) $(CCFLAGS) -I./cxxtest/ -c testrunner.cpp -o testrunner.o
	$(CC) $(CCFLAGS) -I./cxxtest/ -o testrunner $(OBJECTSTEST) testrunner.o

testrunner.cpp: $(HEADERS) $(SOURCES) $(TESTS)
	$(CXXTESTGEN) --error-printer -o testrunner.cpp $(TESTS)


