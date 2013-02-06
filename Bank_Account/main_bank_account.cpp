#include <iostream>
#include "BankAccount.hpp"

int main()
{
	BankAccount *ba1 = new BankAccount("Leszek", 1000, 101); 
	BankAccount *ba2 = new BankAccount("Jack Daniels", -1000, 100); 
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