#include "pch.h"
#include "Random.h"
#include <cstdlib>

Random::Random()
{
	srand(static_cast<unsigned int>(time(0)));
}

int Random::Next()
{
	return rand();
}

int Random::Next(int max)
{
	return rand() % max;
}

int Random::Next(int from, int to)
{
	return from + (rand() % to);
}

double Random::NextDouble()
{
	double random = (double)rand() / RAND_MAX;  
	return random;
}

long Random::Next64()
{
	return (static_cast<long long>(rand()) << 32) | rand();
}

long Random::Next64(long max)
{
	return Next64() % max;
}

long Random::Next64(long from, long to)
{
	return from + Next64(to - from);
}

void Random::NextBytes(Vector<byte>& bytes)
{
	for (int i = 0; i < bytes.size(); i++)
	{
		bytes[i] = static_cast<byte>(rand());
	}
}

