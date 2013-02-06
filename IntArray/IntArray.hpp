#pragma once
#include <iostream>
#include <exception>

class IntArray
{
private:
	int* arr_;
	size_t size_;
public:
	IntArray(size_t size);
	IntArray(size_t size, int default_value);
	~IntArray(void);
	int at(size_t n);
	void at(size_t n, int value);
};

