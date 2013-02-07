#include "Singleton.hpp"
#include <iostream>

using namespace std;

Singleton::Singleton( void )
{
	cout << "Singleton constructor - should print only once!" << endl;;
}

Singleton::~Singleton( void )
{	
}

Singleton& Singleton::get_instance()
{
	return instance;
}

Singleton Singleton::instance;

