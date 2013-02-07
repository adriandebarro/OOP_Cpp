#include <iostream>
#include "Singleton.hpp"

using namespace std;

int main()
{
	Singleton& a = Singleton::get_instance();
	Singleton& b = Singleton::get_instance();
	Singleton& c = Singleton::get_instance();
	
	cout << &a << " == " << &b << endl;
	system("PAUSE");
}