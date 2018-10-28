#include "ConsoleFunctions.h"
#include <string.h>
ConsoleFunctions::ConsoleFunctions()
{
	hIn = GetStdHandle(STD_INPUT_HANDLE);   
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleMode(hOut,ENABLE_WINDOW_INPUT|ENABLE_MOUSE_INPUT);
	//SetConsoleMode
}

void ConsoleFunctions::setConsoleTitle(char* title)
{
	int len = strlen(title);
	wchar_t* str = new wchar_t[len+1];

	for(int i = 0; i<len; i++)
		str[i] = title[i];
	str[len] = '\0';

	SetConsoleTitle(LPCWSTR(str));
}

void ConsoleFunctions::SetCursorAt(int row,int col)
{
	COORD coord;
	coord.X = col;
	coord.Y = row;
	SetConsoleCursorPosition(hOut, coord);
}

char ConsoleFunctions::ReadFrom(int row, int col)
{
	char* str = new char;  //Buffer of 1 char size
	DWORD nLength = 1;     //The number of chars to read, we need to read one character only!
	COORD readFromCoord;   //Co-ordinates from where to read
	readFromCoord.X = col; 
	readFromCoord.Y = row;
	DWORD num_read=0;      //Will be set to no. of charaters actually read
	ReadConsoleOutputCharacter(hOut,(LPTSTR)str, nLength, readFromCoord,(LPDWORD)&num_read);
	return *str;																		 
}

void ConsoleFunctions::SetColor(ConsoleColor textcol,ConsoleColor backcol)
{
	SetColor(int(textcol),int(backcol));
}

void ConsoleFunctions::SetColor(int textcol,int backcol)
{
	bool textcolorprotect=true; //for future use
	/*doesn't let textcolor be the same as backgroung color if true*/
	if(textcolorprotect)
	{
		if((textcol%16)==(backcol%16))textcol++;
	}
	textcol%=16;
	backcol%=16;
	unsigned short wAttributes= (unsigned)textcol|((unsigned)backcol*16);
	SetConsoleTextAttribute(hOut, wAttributes);
}

void ConsoleFunctions::clearConsole()
{

	COORD coordScreen = { 0, 0 };    // home for the cursor 
	DWORD cCharsWritten;
	//CONSOLE_SCREEN_BUFFER_INFO csbi; 
	DWORD dwConSize;
	SetColor(black,black);
	// Get the number of character cells in the current buffer. 

	if( !GetConsoleScreenBufferInfo( hOut, &csbi ))
	{
		return;
	}

	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

	// Fill the entire screen with blanks.

	if( !FillConsoleOutputCharacter( hOut,        // Handle to console screen buffer 
		(TCHAR) ' ',     // Character to write to the buffer
		dwConSize,       // Number of cells to write 
		coordScreen,     // Coordinates of first cell 
		&cCharsWritten ))// Receive number of characters written
	{
		return;
	}

	// Get the current text attribute.

	if( !GetConsoleScreenBufferInfo( hOut ,&csbi ))
	{
		return;
	}

	// Set the buffer's attributes accordingly.

	if( !FillConsoleOutputAttribute( hOut,         // Handle to console screen buffer 
		csbi.wAttributes, // Character attributes to use
		dwConSize,        // Number of cells to set attribute 
		coordScreen,      // Coordinates of first cell 
		&cCharsWritten )) // Receive number of characters written
	{
		return;
	}

	// Put the cursor at its home coordinates.

	SetConsoleCursorPosition( hOut, coordScreen );


}

ConsoleFunctions::~ConsoleFunctions()
{
}
