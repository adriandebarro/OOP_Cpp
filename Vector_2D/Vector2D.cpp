#include "Vector2D.hpp"
#include <iostream>

using namespace std;

Vector2D::Vector2D(double x, double y) :
	x_(x), y_(y)
{
}


Vector2D::~Vector2D(void)
{
}

Vector2D Vector2D::operator+(const Vector2D& v2 ) const
{
	return Vector2D(x_ + v2.x_ , y_ + v2.y_);
}

void Vector2D::print() const
{
	cout << "Position X: " << x_ << " , Position Y: " << y_ << endl;
}

std::ostream& operator<< (std::ostream& out, Vector2D vec)
{
	out << "posX: " << vec.x_ << " posY: " << vec.y_;
	return out;
}