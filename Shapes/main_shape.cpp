#include <iostream>
#include <vector>

#include "Shape.hpp"

using namespace std;

int main()
{
	vector<Shape*> shapes;
	shapes.push_back(new Circle(Point(0, 0), 10));
	shapes.push_back(new Line(Point(0,0), Point(5,5)));

	for (size_t i = 0 ; i < shapes.size() ; ++i)
	{
		shapes[i]->draw();
	}

	for (size_t i = 0 ; i < shapes.size() ; ++i)
	{
		delete shapes[i];
	}

	/*Shape* shape = new Circle(Point(1, 2), 3);

	Circle* circle;

	if (circle = dynamic_cast<Circle*>(shape))
		circle->draw();
	*/

	system("PAUSE");
}