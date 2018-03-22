//----------------------------------------------------------------------
// IMPLEMENTATION FILE compfun.cpp
//
// Imnplenents: An assortment of functions for use with the textbook
//              'Computing Fundamentals with C++', 3rd edition
//----------------------------------------------------------------------

#include <iostream>   // for cout and class ostream  (needed in decimals)
#include <cmath>      // for pow and ceil
#include <cstdio>    // for getchar()
// #include <cstdlib>   // for time, srand, and system("operating system command")
// #include <ctime>     // for struct time
#include "utilities.h"  // allow for separate compile

using namespace std;

void clearScreen()
{
	// TODO: Find a define for either DOS, Windows, or MacOS so I can get three, not 2 OSs
#ifdef __unix__
	system("tput clear");	// clear the screen if terminfo is installed
#else
	system("cls");
#endif
}

void causeApause()
{
	cout << "\n. . . Press Enter to continue . . . ";
	cout.flush();
	getchar();   // Make user press the Enter (or Return) key
}

void decimals(ostream & cout, int n)
{ // Note: This function affects any ostream object	
	if (n > 0)
	{
		// Change the output stream to show decimal point and 
		// n decimal places for any subsequent float or double.
		cout.setf(ios::fixed, ios::floatfield);
		cout.setf(ios::showpoint);
		cout.precision(n);
	}
}

void flush(istream & is)
{ // call istream::clear and extract any garbage until end of file
	is.clear();
	char nextChar;
	while ((nextChar = is.get()) != '\n' && nextChar != EOF) {}
	is.clear();
}
