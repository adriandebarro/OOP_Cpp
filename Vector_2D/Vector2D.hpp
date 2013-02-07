#pragma once
#include <strstream>

class Vector2D
{
public:
	Vector2D(double x, double y);
	~Vector2D(void);
	void print() const;

	Vector2D operator+(const Vector2D& v2) const;

	friend std::ostream& operator<< (std::ostream& out, Vector2D vec);

private:
	double x_, y_;
};

std::ostream& operator<< (std::ostream& out, Vector2D vec);




// V3 = V1.add(V2);
// V1 + V2
