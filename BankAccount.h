/*
 *  Define class bankAccount
 *
 *  File name: bankAccount.h
 */
#ifndef BANKACCOUNT_H_ // The first two lines mean the two #includes
#define BANKACCOUNT_H_ // that follow will only be performed once

#include <string>

class BankAccount {

public:
  // Construct new BankAccount objects with two arguments:
  //  BankAccount anAcct("Hall", 100.00);
  BankAccount(std::string initName, double initBalance);

  // A default constructor will be needed if you want a vector of these objects
  //  vector<BankAccount> accounts(100);
  BankAccount();

   // Return this BankAccount's current balance
  double getBalance() const;

  // post: Return this BankAccount's name
  std::string getName() const;

  // Credit depositAmount to the balance
  void deposit(double depositAmount);

  // Debit withdrawalAmount from the balance
  void withdraw(double withdrawalAmount);

  // Overload the == operator to compare two BankAccount objects
  bool operator == (const BankAccount& other) const;

private:
  std::string name;
  double balance;
};

#endif /* BANKACCOUNT_H_ */
