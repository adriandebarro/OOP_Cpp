#include <iostream>
#include "BankAccount.hpp"

int test(const BankAccount &ba)
{
	ba.print();
	return 0;
}

int main()
{
	BankAccount *ba1 = new BankAccount("Leszek", 1000); 
	BankAccount *ba2 = new BankAccount("Jack Daniels", -1000); 
	//BankAccount *ba3 = new BankAccount(ba1);
	test(*ba1);
	ba1->print();
	ba1->withdraw(100);
	ba1->print();
	ba2->print();
	ba2->withdraw(100);
	ba2->print();
	delete ba1;
	delete ba2;
	system("PAUSE");
	return 0;

}