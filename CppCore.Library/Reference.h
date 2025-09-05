#pragma once
#include "Object.h"

template <typename T>
class Reference : public Object
{
public:
	/// <summary>
	/// Obiekt reprezentuj�cy pust� referencj� danego typu.
	/// </summary>
	static const T Null;
};

template <typename T>
const T Reference<T>::Null = T();

