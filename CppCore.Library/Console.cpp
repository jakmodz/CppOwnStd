#include "pch.h"
#include <iostream>
#include "Console.h"
#include <Windows.h>

using namespace std;
void Console::Beep()
{
    cout << char(7);
}

void Console::Clear()
{
    system("cls");
}

Tuple<int, int> Console::GetCursorPosition()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int row, col;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) 
    {
        col = csbi.dwCursorPosition.X;
        row = csbi.dwCursorPosition.Y;
        return Tuple<int, int>(row, col);
    }
    else
    {
        //TODO: wyrzycac wyjatek 
        
    }
     
	
}

void Console::SetCursorPosition(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD cursorPos;
    cursorPos.X = x;  
    cursorPos.Y = y; 
    SetConsoleCursorPosition(hConsole, cursorPos);
}

void Console::WriteLine(String& line)
{
    std::cout << line << std::endl;
}

void Console::WriteLine(char* line)
{
    std::cout << line << std::endl;
}

void Console::Write(String& line)
{
    std::cout << line;
}

void Console::Write(char* line)
{
    std::cout << line;
}

int Console::Read()
{
    char input;
    cin >> input;
    return  (int)input;
}

String Console::ReadLine()
{
    String line;
    cin >> line;
    return line;
}
