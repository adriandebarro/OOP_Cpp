#pragma once
#include <string>

class BankAccount
{
public:
	void withdraw(int amount);
	void deposit(int amount);
	void print();
	BankAccount(void);
	BankAccount(std::string owner, int balance, long num);
	~BankAccount(void);
protected:
	int balance_;
	std::string owner_;
	const long number_;
};


