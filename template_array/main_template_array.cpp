#include <iostream>

#include "array.hpp"

int main()
{
	Array<double> arr(10);
	for (int i = 0 ; i < arr.size() ; ++i)
	{
		arr[i] = i*0.5;
	}

	std::cout << arr[2] << std::endl;

	std::cout << arr << std::endl;
	system("PAUSE");
}