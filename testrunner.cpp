/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_NumberTest_init = false;
#include "/Users/harryaka/Dropbox/School/CS2/CS2Repo/krananha-program01-contacts/number_test.h"

static NumberTest suite_NumberTest;

static CxxTest::List Tests_NumberTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_NumberTest( "number_test.h", 17, "NumberTest", suite_NumberTest, Tests_NumberTest );

static class TestDescription_suite_NumberTest_testConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_NumberTest_testConstructor() : CxxTest::RealTestDescription( Tests_NumberTest, suiteDescription_NumberTest, 19, "testConstructor" ) {}
 void runTest() { suite_NumberTest.testConstructor(); }
} testDescription_suite_NumberTest_testConstructor;

#include "/Users/harryaka/Dropbox/School/CS2/CS2Repo/krananha-program01-contacts/address_book_test.h"

static AddressBookTest suite_AddressBookTest;

static CxxTest::List Tests_AddressBookTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_AddressBookTest( "address_book_test.h", 20, "AddressBookTest", suite_AddressBookTest, Tests_AddressBookTest );

static class TestDescription_suite_AddressBookTest_testConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AddressBookTest_testConstructor() : CxxTest::RealTestDescription( Tests_AddressBookTest, suiteDescription_AddressBookTest, 22, "testConstructor" ) {}
 void runTest() { suite_AddressBookTest.testConstructor(); }
} testDescription_suite_AddressBookTest_testConstructor;

static class TestDescription_suite_AddressBookTest_testAddContacts : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AddressBookTest_testAddContacts() : CxxTest::RealTestDescription( Tests_AddressBookTest, suiteDescription_AddressBookTest, 27, "testAddContacts" ) {}
 void runTest() { suite_AddressBookTest.testAddContacts(); }
} testDescription_suite_AddressBookTest_testAddContacts;

static class TestDescription_suite_AddressBookTest_testAdd2Contacts : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AddressBookTest_testAdd2Contacts() : CxxTest::RealTestDescription( Tests_AddressBookTest, suiteDescription_AddressBookTest, 34, "testAdd2Contacts" ) {}
 void runTest() { suite_AddressBookTest.testAdd2Contacts(); }
} testDescription_suite_AddressBookTest_testAdd2Contacts;

static class TestDescription_suite_AddressBookTest_testGetContact : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AddressBookTest_testGetContact() : CxxTest::RealTestDescription( Tests_AddressBookTest, suiteDescription_AddressBookTest, 45, "testGetContact" ) {}
 void runTest() { suite_AddressBookTest.testGetContact(); }
} testDescription_suite_AddressBookTest_testGetContact;

static class TestDescription_suite_AddressBookTest_testGetContactNULL : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_AddressBookTest_testGetContactNULL() : CxxTest::RealTestDescription( Tests_AddressBookTest, suiteDescription_AddressBookTest, 56, "testGetContactNULL" ) {}
 void runTest() { suite_AddressBookTest.testGetContactNULL(); }
} testDescription_suite_AddressBookTest_testGetContactNULL;

#include "/Users/harryaka/Dropbox/School/CS2/CS2Repo/krananha-program01-contacts/contact_test.h"

static ContactTest suite_ContactTest;

static CxxTest::List Tests_ContactTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_ContactTest( "contact_test.h", 19, "ContactTest", suite_ContactTest, Tests_ContactTest );

static class TestDescription_suite_ContactTest_testConstructor : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContactTest_testConstructor() : CxxTest::RealTestDescription( Tests_ContactTest, suiteDescription_ContactTest, 21, "testConstructor" ) {}
 void runTest() { suite_ContactTest.testConstructor(); }
} testDescription_suite_ContactTest_testConstructor;

static class TestDescription_suite_ContactTest_testAddNumber : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContactTest_testAddNumber() : CxxTest::RealTestDescription( Tests_ContactTest, suiteDescription_ContactTest, 27, "testAddNumber" ) {}
 void runTest() { suite_ContactTest.testAddNumber(); }
} testDescription_suite_ContactTest_testAddNumber;

static class TestDescription_suite_ContactTest_testAdd2Numbers : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContactTest_testAdd2Numbers() : CxxTest::RealTestDescription( Tests_ContactTest, suiteDescription_ContactTest, 35, "testAdd2Numbers" ) {}
 void runTest() { suite_ContactTest.testAdd2Numbers(); }
} testDescription_suite_ContactTest_testAdd2Numbers;

static class TestDescription_suite_ContactTest_testGetContactNumber : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContactTest_testGetContactNumber() : CxxTest::RealTestDescription( Tests_ContactTest, suiteDescription_ContactTest, 45, "testGetContactNumber" ) {}
 void runTest() { suite_ContactTest.testGetContactNumber(); }
} testDescription_suite_ContactTest_testGetContactNumber;

static class TestDescription_suite_ContactTest_testGetContactNumberNULL : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_ContactTest_testGetContactNumberNULL() : CxxTest::RealTestDescription( Tests_ContactTest, suiteDescription_ContactTest, 53, "testGetContactNumberNULL" ) {}
 void runTest() { suite_ContactTest.testGetContactNumberNULL(); }
} testDescription_suite_ContactTest_testGetContactNumberNULL;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
