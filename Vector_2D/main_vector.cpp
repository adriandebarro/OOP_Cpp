#include "Vector2D.hpp"
#include <iostream>

using namespace std;

int main()
{
	Vector2D v1(2.0, 3.0);
	Vector2D v2(3.5, 4.5);

	Vector2D v3 = v1+v2;
	cout << v3 << endl;
	system("PAUSE");

}