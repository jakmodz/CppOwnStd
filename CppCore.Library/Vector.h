#pragma once
#include <iostream>
#include "Object.h"
#include "IndexOutOfRangeException.h"
#include <algorithm>
template <typename T>
class Vector : public Object
{
public:
	Vector();
	~Vector();
	void push(T data);
	void clear();
	size_t capacity();
	size_t size();
	void pop_back();
	T at(size_t index);
	T& operator[](size_t index);
	Vector& operator=(const Vector& other);
private:
	size_t _size;
	size_t _capacity;
	T* _data;

	void resize(size_t new_capacity);
};

template<typename T>
inline Vector<T>::Vector(): _data(nullptr), _capacity(0),_size(0)
{

}

template<typename T>
inline Vector<T>::~Vector()
{
	if (_data == nullptr)
	{
		delete[] _data;
		_data = nullptr;
	}
}

template<typename T>
inline void Vector<T>::push(T data)
{
	if (_size == _capacity)
	{
		size_t new_capacity = _capacity + 1;
		resize(new_capacity);
	}
	_data[_size] = data;
	++_size;
}

template<typename T>
inline void Vector<T>::clear()
{
	_size = 0;
}

template<typename T>
inline size_t Vector<T>::capacity()
{
	return _capacity;
}

template<typename T>
inline size_t Vector<T>::size()
{
	return _size;
}

template<typename T>
inline void Vector<T>::pop_back()
{
	if (_size == 0)
	{
		throw IndexOutOfRangeException();
	}
	else
	{
		_data[_size] = NULL;
		--_size;
	}
}


template<typename T>
inline T Vector<T>::at(size_t index)
{
	if (index > _size)
	{
		throw IndexOutOfRangeException();
	}
	else
	{
		return _data[index];
	}
}

template<typename T>
inline T& Vector<T>::operator[](size_t index)
{
	if (index == _size)
	{ 
		throw IndexOutOfRangeException();
	}
	return _data[index];
}

template<typename T>
inline Vector<T>& Vector<T>::operator=(const Vector& other)
{
	if (*this == other)
	{
		return this;
	}
	delete[] _data;

	_size = other._size;
	_capacity = other._capacity;
	_data = new T[_capacity];
	std::copy(other._data, other._data + other._size, _data);

	return *this;
}


template<typename T>
inline void Vector<T>::resize(size_t new_capacity)
{
	T* new_data = new T[new_capacity];
	std::copy(_data, _data + _size, new_data);
	delete[] _data;
	_data = new_data;
	_capacity = new_capacity;
}
