#include "IntArray.hpp"
#include <stdexcept>

IntArray::IntArray( size_t size ) : size_(size)
{
	arr_ = new int[size];
}

IntArray::IntArray( size_t size, int default_value ) : size_(size)
{
	arr_ = new int[size];
	for (int i = 0 ; i < size_ ; ++i)
	{
		arr_[i] = default_value;
	}
}

IntArray::~IntArray( void )
{
	delete[] arr_;
}

int IntArray::at( size_t n )
{
	if (n < size_ && n > 0)
		return arr_[n];
	else throw std::range_error("out of range in array");
}

void IntArray::at( size_t n, int value )
{
	if (n < size_ && n > 0)
		arr_[n] = value;
	else throw std::range_error("out of range in array");
}
