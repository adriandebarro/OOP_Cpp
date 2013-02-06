#include <iostream>
#include "IntArray.hpp"

using namespace std;

int main()
{
	IntArray arr = IntArray(10, -1);
	cout << "Access within range" << endl;
	cout << arr.at(1) << endl;
	cout << "Access beyond range" << endl;
	try
	{
		cout << arr.at(20) << endl;
	}
	catch (std::range_error& e)
	{
		cout << "Error:" << endl;
		cout << e.what() << endl;
	}

	system("PAUSE");
	
}