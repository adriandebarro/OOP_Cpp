#include "IntArray.hpp"
#include <stdexcept>

IntArray::IntArray( size_t size ) : size_(size)
{
	arr_ = new int[size];
}

IntArray::IntArray( size_t size, int default_value ) : size_(size)
{
	arr_ = new int[size];
	for (size_t i = 0 ; i < size_ ; ++i)
	{
		arr_[i] = default_value;
	}
}

IntArray::IntArray( const IntArray& a )
{
	size_ = a.size_;
	arr_ = new int[a.size_];
	for (size_t i = 0 ; i < size_ ; ++i)
	{
		arr_[i] = a.arr_[i];
	}
}

IntArray::~IntArray( void )
{
	delete[] arr_;
}

int IntArray::at( size_t n ) const
{
	if (n < size_ && n >= 0)
		return arr_[n];
	else throw std::range_error("out of range in array");
}

void IntArray::at( size_t n, int value )
{
	if (n < size_ && n >= 0)
		arr_[n] = value;
	else throw std::range_error("out of range in array");
}

IntArray IntArray::operator+( const IntArray& arr2 )
{
	IntArray arr(size_ + arr2.size_);
	size_t i = 0;
	// left side
	for (; i < size_; ++i)
		arr.arr_[i] = arr_[i];
	// right side
	for (int j = 0 ; i < size_ + arr2.size_ ; ++i, ++j)
		arr.arr_[i] = arr2.arr_[j];
	return arr;
}

IntArray& IntArray::operator+=( const IntArray& arr2 )
{	
	size_t new_size = size_ + arr2.size_;
	int* new_arr = new int[new_size];
	
	size_t i = 0;
	for (; i < size_; ++i)
		new_arr[i] = arr_[i];
	for (int j = 0 ; i < size_ + arr2.size_ ; ++i, ++j)
		new_arr[i] = arr2.arr_[j];

	delete[] arr_;	
	arr_ = new_arr;
	size_ = new_size;
	return *this;
}

int& IntArray::operator[]( size_t index )
{
	if ( index < size_ && index >= 0)
		return arr_[index];
	else throw std::range_error("out of range in array");
}

const int& IntArray::operator[]( size_t index ) const
{
	return at(index);
}


std::ostream& operator<< (std::ostream &out, const IntArray& a)
{
	out << "[ ";
	for(size_t i = 0 ; i < a.size_; ++i)	
		out << a.at(i) << " ";
	out << " ]";
	return out;
}