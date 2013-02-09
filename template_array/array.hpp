#include <strstream>

template <typename T>
class Array
{
private:
	T* arr_;
	size_t size_;
	Array() {};

public:
	Array(size_t size);
	Array(const Array<T>& a);
	~Array(void);
	size_t size() const;
	T& operator[](size_t index);
	const T& operator[](size_t index) const;

	template <typename P>
	friend std::ostream& operator << (std::ostream &out, const Array<P>& a);

};

template <typename T>
std::ostream& operator << (std::ostream &out, const Array<T>& a)
{
	out << "[ ";
	for (size_t i = 0 ; i < a.size_ ; ++i)
	{
		out << a[i] << "; ";
	}
	out << " ]";
	return out;
}

template <class T>
Array<T>::Array(size_t size) : size_(size)
{
	arr_ = new T[size_];
}

template <class T>
Array<T>::Array(const Array<T>& a)
{
	size_ = a.size_;
	arr_ = new T[a.size_];
	for (size_t i = 0 ; i < size_ ; ++i)
	{
		arr_[i] = a.arr_[i];
	}
}

template <class T>
Array<T>::~Array(void)
{
	delete[] arr_;
}

template <class T>
T& Array<T>::operator[](size_t index)
{
	return arr_[index];	
}

template <class T>
const T& Array<T>::operator[](size_t index) const
{	
	return arr_[index];
}

template <class T>
size_t Array<T>::size() const
{
	return size_;
}
