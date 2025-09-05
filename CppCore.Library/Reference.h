#pragma once
#include "Object.h"

template <typename T>
class Reference : public Object
{
public:
	/// <summary>
	/// Obiekt reprezentuj¹cy pust¹ referencjê danego typu.
	/// </summary>
	static const T Null;
};

template <typename T>
const T Reference<T>::Null = T();

