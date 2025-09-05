#pragma once
#include "Vector.h"
#include <initializer_list>
#include "Object.h"
#include "IndexOutOfRangeException.h"
#include <cstddef>

template<typename T, size_t size>
class Array : public Object
{
public:
	Array();
	Array(std::initializer_list<T> values);

	void Fill(const T& value);
	T& operator[](size_t index);
	T& At(size_t index);
	size_t Size() const;
	T& Front();
	T& Back();
	const T* GetData() const;
private:
	T _data[size];
};

template<typename T, size_t size>
inline Array<T, size>::Array()
{
	for (int i = 0; i < size; i++)
	{
		_data[i] = T();
	}
}

template<typename T, size_t size>
inline Array<T, size>::Array(std::initializer_list<T> values)
{
	size_t i = 0;
	for (auto v: values)
	{
		if (i < size)
		{
			_data[i++] = v;
		}
		else
		{
			break;
		}
	}
}

template<typename T, size_t size>
inline void Array<T, size>::Fill(const T& value)
{
	for (int i = 0; i < size; i++)
	{
		_data[i] = value;
	}
}

template<typename T, size_t size>
inline T& Array<T, size>::operator[](size_t index)
{
	return At(index);
}

template<typename T, size_t size>
inline T& Array<T, size>::At(size_t index)
{
	if (index >= size)
	{
		throw IndexOutOfRangeException();
	}
	else
	{
		return _data[index];
	}
}

template<typename T, size_t size>
inline size_t Array<T, size>::Size() const
{
	return size;
}

template<typename T, size_t size>
inline T& Array<T, size>::Front()
{
	return _data[0];
}

template<typename T, size_t size>
inline T& Array<T, size>::Back()
{
	return _data[size - 1];
}

template<typename T, size_t size>
inline const T* Array<T, size>::GetData() const
{
	return _data;
}
