/*
 * Implement the member functions of the
 * BankAccount class defined in BankAccount.h
 *
 * File name: BankAccount.cpp
 */
#include "BankAccount.h"
using namespace std;

// Construct new BankAccount objects with two arguments:
//  BankAccount anAcct("Hall", 100.00);
BankAccount::BankAccount(std::string initName, double initBalance) {
  name = initName;
  balance = initBalance;
}

// A default constructor will be needed if you want a collection of these objects
//  vector<BankAccount> accounts(100);
BankAccount::BankAccount() {
  name = "???";
  balance = -9.99;
}

//--accessors

// Return this BankAccount's current balance
double BankAccount::getBalance() const {
  return balance;
}

// post: Return this BankAccount's name
std::string BankAccount::getName() const {
  return name;
}

//--modifiers

// Credit depositAmount to the balance
void BankAccount::deposit(double depositAmount) {
  balance = balance + depositAmount;
}

// Debit withdrawalAmount from the balance
void BankAccount::withdraw(double withdrawalAmount) {
  balance = balance - withdrawalAmount;
}

// -- overloaded operator

// Overload the == operator to compare two BankAccount objects
bool BankAccount::operator == (const BankAccount& right) const {
  return name == right.name;
}

