// ----------------------------------------------------------------------
// SPECIFICATION FILE Utility.h
//
// Declares: An assortment of functions for use with the textbook
//              'Computing Fundamentals with C++', 3rd edition
//----------------------------------------------------------------------
#ifndef UTILITIES
#define UTILITIES
#include <iostream>   // for class ostream  and class istream
using namespace std;

void clearScreen();
// pre:  the correct system call exist for your system
// post: the sceeen is cleared 

void causeApause();
// post: // Make user press the Enter (or Return) key before continuing

void decimals(ostream & cout, int n);
// pre: n > 0 ;

void flush(istream & is);
// call istream::clear and extract any garbage until end of file


#endif   // UTILITIES
