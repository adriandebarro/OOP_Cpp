#pragma once
#include <string>

class BankAccount
{
public:
	void withdraw(int amount);
	void deposit(int amount);
	void print() const;
	BankAccount(void);
	BankAccount(std::string owner, int balance);
	~BankAccount(void);
protected:
	BankAccount(const BankAccount &ba);
	int balance_;
	std::string owner_;
	const long number_;
	static long generator_number_;
};


