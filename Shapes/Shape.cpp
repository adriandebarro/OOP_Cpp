#include "Shape.hpp"
#include <iostream>

using namespace std;

Line::Line( Point start, Point end ) : start_(start), end_(end)
{
	cout << "C: Line " << endl;
}

Line::~Line()
{
	cout << "D: Line" << endl;
}

void Line::draw()
{
	cout << "Drawing: Line from: " << start_ << "to: " << end_ << endl;
}

Circle::Circle( Point centre, int radius ) : centre_(centre), radius_(radius)
{
	cout << "C: Circle " << endl;
}

Circle::~Circle()
{
	cout << "D: Line " << endl;
}

void Circle::draw()
{
	cout << "Drawing: Circle in: " << centre_ << " radius"  << radius_<< endl;
}

std::ostream& operator<<(std::ostream& out, Point& pt)
{
	out << " { " << pt.x << " : " << pt.y << " } ";
	return out;
}