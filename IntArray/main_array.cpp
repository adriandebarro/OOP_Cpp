#include <iostream>
#include "IntArray.hpp"

using namespace std;

int main()
{
	IntArray arr1(10, -1);
	cout << "Access within range" << endl;
	cout << arr1.at(1) << endl;
	cout << "Access beyond range" << endl;
	try
	{
		cout << arr1.at(20) << endl;
	}
	catch (std::range_error& e)
	{
		cout << "Error:" << endl;
		cout << e.what() << endl;
	}

	cout << arr1 << endl;
	cout << "Copying constructor" << endl;
	IntArray arr2(arr1);
	cout << arr2 << endl;
	cout << arr1 + arr2 << endl;

	IntArray arr3(3, 9);
	arr3[2] = 100;
	cout << arr3[0];
	arr3 += arr2;
	cout << arr3 << endl;

	IntArray arr_0(0, 100);
	IntArray arr_1(1, 200);
	cout << arr_0 + arr_1;


	system("PAUSE");
	
}