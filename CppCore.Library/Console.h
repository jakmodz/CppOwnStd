#pragma once
#include "String.h"
#include "Tuple.h"
class Console
{
public:
	static void Beep();
	static void Clear();
	static Tuple<int, int>GetCursorPosition();
	static void SetCursorPosition(int x, int y);
	static void WriteLine(String& line);
	static void WriteLine(char* line);
	static void Write(String& line);
	static void Write(char* line);
	static int Read();
	static String ReadLine();
		

private:

};

