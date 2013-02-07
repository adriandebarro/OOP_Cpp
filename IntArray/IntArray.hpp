#pragma once
#include <iostream>
#include <strstream>
#include <exception>

class IntArray
{
private:
	int* arr_;
	size_t size_;
	IntArray() {};

public:
	IntArray(size_t size);
	IntArray(const IntArray& a);

	IntArray(size_t size, int default_value);
	~IntArray(void);
	int at(size_t n) const;
	void at(size_t n, int value);

	IntArray operator+(const IntArray& arr2);
	IntArray& operator+=(const IntArray& arr2);
	int& operator[](size_t index);
	const int& operator[](size_t index) const;

	friend std::ostream& operator<< (std::ostream &out, const IntArray& a);
	
};

std::ostream& operator<< (std::ostream &out, const IntArray& a);



