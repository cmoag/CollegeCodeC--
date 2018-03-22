//Corey Moag CIS 127.2490 Assginment 10.2 Collection of BankAccounts

#include <fstream>
#include <iostream>
#include <vector>
#include "BankAccount.h"
#include "utilities.h"

using namespace std;
void decimals(ostream & cout, int n)
{ // Note: This function affects any ostream object	
	string fileName = "bank.data";
	ifstream inFile(fileName.c_str());
	if (n > 0)
	{
		// Change the output stream to show decimal point and 
		// n decimal places for any subsequent float or double.
		cout.setf(ios::fixed, ios::floatfield);
		cout.setf(ios::showpoint);
		cout.precision(n);
	}
	else
	{
		vector <BankAccount> account(20);
		string name;
		double balance = 0.0;
		int numberOfAccounts = 0;
		while ((inFile >> name >> balance)
			&& (numberOfAccounts < account.capacity()))
		{
			account[numberOfAccounts] = BankAccount(name, balance);
			numberOfAccounts++;
		}
		cout << "Number of accounts on file: " << numberOfAccounts << endl;
		cout << endl;
		cout << "The accounts" << endl;
		cout << "===========================" << endl;
		for (int index = 0; index < numberOfAccounts; index++) {
			cout.width(2);
			cout << index << ". ";
			cout << account[index].getName();
			cout.width(20 - account[index].getName().length());
			cout << account[index].getBalance() << endl;
		}
	}
}
	int main()
	{
		string fileName = "bank.data";
		ifstream inFile(fileName.c_str());
		
		if (!inFile)
		{
			cout << "**Error** " << fileName << " was not found" << endl;
		}
		else
		{
			vector <BankAccount> account(20);
			string name;
			double balance = 0.0;
			int numberOfAccounts = 0;
			while ((inFile >> name >> balance)
				&& (numberOfAccounts < account.capacity()))
			{
				account[numberOfAccounts] = BankAccount(name, balance);
				numberOfAccounts++;
			}
			vector<int> vec(10, 0);
			int n;
			decimals(cout, 2);

			cout << "Corey Moag, CIS 127.2490, Assignment 10.2 Collection of BankAccounts" << endl;
			cout << "Balance >= 1000.00" << endl;
			for (BankAccount; balance >= 1000.00;)
			{
				cout << name << ": " << balance << endl;
				break;
			}
		}

		system("pause");
		return 0;
	}

/*




*/
