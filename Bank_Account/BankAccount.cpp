#include "BankAccount.hpp"
#include <iostream>

using namespace std;

BankAccount::BankAccount(void) :
	owner_("_test_account"), balance_(0), number_(1)
{	
	cout << "Inside constructor" << endl;
}

BankAccount::BankAccount(string owner, int balance, long num) :
	owner_(owner), balance_(balance), number_(num)
{
	cout << "Inside parametrized constructor" << endl;	
}

BankAccount::~BankAccount(void)
{
	cout << "Inside destructor" << endl;
}

void BankAccount::withdraw(int amount)
{
	cout << "method withdraw with amount: " << amount << endl;
	balance_ -= amount;
}

void BankAccount::deposit( int amount )
{
	cout << "method deposit with amount: " << amount << endl;
	balance_ += amount;
}

void BankAccount::print()
{
	cout << "Bank Account owner: " << owner_ << " with amount: " << balance_ << endl;
}


