#include <string>
#include <iostream>
#include <memory>

#include "Stack.hpp"

int main()
{
	std::cout << "Stack implementation" << std::endl;
	Stack s = Stack();
	s.push("Ala");
	s.push("Ola");
	s.push("Bewilderment");
	//while(!s.is_empty())
	//	std::cout << s.pop()->data() << std::endl;
	system("PAUSE");
}