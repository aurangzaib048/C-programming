#include <windows.h>
#include <iostream>
#include <cstdlib>

using namespace std;

#pragma once

struct point
{
	int x;
	int y;
};

enum ConsoleColor
{
	black=0,
	dark_blue=1,
	dark_green=2,
	dark_aqua,dark_cyan=3,
	dark_red=4,
	dark_purple=5,dark_pink=5,dark_magenta=5,
	dark_yellow=6,
	dark_white=7,
	gray=8,
	blue=9,
	green=10,
	aqua=11,cyan=11,
	red=12,
	purple=13,pink=13,magenta=13,
	yellow=14,
	white=15
};

class ConsoleFunctions
{
	HANDLE hIn;
	HANDLE hOut;
	INPUT_RECORD InRec;
	CONSOLE_SCREEN_BUFFER_INFO csbi;

public:
	ConsoleFunctions();
	void setConsoleTitle(char* title);
	void SetCursorAt(int row,int col);
	char ReadFrom(int row, int col);	
	void SetColor(ConsoleColor textcol,ConsoleColor backcol);
	void SetColor(int textcol,int backcol);
	void clearConsole();
	~ConsoleFunctions();

};
