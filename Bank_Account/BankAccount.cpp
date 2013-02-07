#include "BankAccount.hpp"
#include <iostream>

using namespace std;

long BankAccount::generator_number_ = 0;

BankAccount::BankAccount(void) :
	owner_("_test_account"), balance_(0), number_(generator_number_)
{	
	generator_number_++;
	cout << "Inside constructor" << endl;
}

BankAccount::BankAccount(string owner, int balance) :
	owner_(owner), balance_(balance), number_(generator_number_)
{
	generator_number_++;
	cout << "Inside parametrized constructor" << endl;	
}

BankAccount::BankAccount( const BankAccount &ba ) : number_(0)
{

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

void BankAccount::print() const
{
	cout << "Bank Account " << number_ << " owner: " << owner_ << " with amount: " << balance_ << endl;
}


