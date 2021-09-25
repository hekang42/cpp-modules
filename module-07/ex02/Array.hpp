#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array
{
private:
	unsigned int _size;
	T *array;
public:
	Array()
	{
		_size = 0;
		array = new T[0];
	}
	Array(unsigned int n)
	{
		_size = n;
		array = new T[n];
	}
	Array(const Array &other)
	{
		this->array = new T[other.size()];
		this->_size = other.size();
		for (unsigned int i = 0; i < other.size(); i++)
			this->array[i] = other[i];
	}
	Array<T> &operator=(const Array &other)
	{
		this->~Array();
		this->array = new T[other.size()];
		this->_size = other.size();
		for (unsigned int i = 0; i < other.size(); i++)
			this->array[i] = other[i];
		return *this;
	}
	T operator[](int i) const
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
			throw Array::OutOfRangeException();
		return this->array[i];
	}
	T &operator[](int i)
	{
		if (i < 0 || i >= static_cast<int>(this->size()))
			throw Array::OutOfRangeException();
		return this->array[i];
	}
	~Array()
	{
		delete[] this->array;
	}
	unsigned int size() const
	{
		return this->_size;
	}

	class OutOfRangeException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Out of range";
		}
	};
};

#endif