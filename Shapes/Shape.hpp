#include <strstream>

struct Point
{
	int x;
	int y;
	Point(int x, int y): x(x), y(y) {}
};

std::ostream& operator<<(std::ostream& out, Point& pt);

#pragma once
class Shape
{
public:
	Shape() {};
	virtual ~Shape(void) {} ;
	virtual void draw() = 0;
};

class Line : public Shape
{
	Point start_;
	Point end_;
public:
	Line(Point start, Point end);
	~Line();
	void draw();
};

class Circle : public Shape
{
	Point centre_;
	int radius_;
public:
	Circle(Point centre, int radius);
	~Circle();
	void draw();
};
