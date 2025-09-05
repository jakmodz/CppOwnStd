#pragma once
#include "Object.h"
#include "Vector.h"
using byte = unsigned char;
class Random : public Object
{
public:
	Random();
	int Next();
	int Next(int max);
	int Next(int from, int to);
	double NextDouble();
	long Next64();
	long Next64(long max);
	long Next64(long from, long to);
	void NextBytes(Vector<byte>& bytes);
private:

};

