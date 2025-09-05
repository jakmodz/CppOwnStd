#pragma once
#include <iostream>
#include "Vector.h"
#include "String.h"
using byte = unsigned char;
union converter
{
	
	char ch;
	unsigned char uch;
	bool bo;
	unsigned int u32;
	int i32;
	float f;
	double d;
	long long i64;
	long long u64;
	byte bytes [sizeof(double)];

};
class BitConverter
{
public:
	static Vector<byte> GetBytes(int value);
	static Vector<byte> GetBytes(unsigned int value);
	static Vector<byte> GetBytes(float value);
	static Vector<byte> GetBytes(double value);
	static Vector<byte> GetBytes(char value);
	static Vector<byte> GetBytes(bool value);
	static Vector<byte> GetBytes(long long value);
	static Vector<byte> GetBytes(unsigned char value);
	static Vector<byte> GetBytes(unsigned long long  value);

	static double ToDouble(Vector<byte> bytes, int start_index);
	static int ToInt(Vector<byte> bytes, int start_index);
	static unsigned int ToUInt(Vector<byte> bytes, int start_index);
	static float ToFloat(Vector<byte> bytes, int start_index);
	static unsigned long long  ToUInt64(Vector<byte> bytes, int start_index);
	static long long ToInt64(Vector<byte> bytes, int start_index);
	static unsigned char ToUInt8(byte value);
	
	static String ToString(Vector<byte> bytes);
	static String ToString(Vector<byte> bytes, int index);
	static String ToString(Vector<byte> bytes, int from, int to);
private:

};

