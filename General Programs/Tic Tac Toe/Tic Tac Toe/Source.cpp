/*
Program for simple "TIC TAC TOE" game for 2-Players using 2-D Array.
=>Also displays "Invalid Input" message if entered place is already used.
=>Also ask Players for choosing their character\symbol in game.
*/

#include<iostream>
#include<iomanip>
using namespace std;

//Function Declarations
void displayBoard(char[][3]);
void inputCord(char[][3], char, char);
int checkresult(char[][3], char, char);

int main()
{
	char board[3][3] = { '*', '*', '*', '*', '*', '*', '*', '*', '*' };			//2-D Array for gameboard
	int result = 0;
	char p1, p2;

	//for getting Player symbols
	//for player-1
	do
	{
		cout << "Enter character\\symbol for Player-1 (Except '.'):\t";
		cin >> p1;
		if (p1 == '.')
			cout << "Invalid Input........\n";
	} while (p1 == '.');
	//for player-2
	do
	{
		cout << "Enter character\\symbol for Player-2 (Except '.'):\t";
		cin >> p2; if (p2 == '.')
			cout << "Invalid Input........\n";
	} while (p2 == '.');

	//For getting 9 inputs
	for (int i = 1; i <= 9; i++)
	{
		system("cls");						//Clear's screen after every input
		cout << "Player-1 = " << p1 << "\nPlayer-2 = " << p2 << "\nEnter x and y coordinates for choosing cell:\n";	//Displays message

		//Displays GameBoard
		displayBoard(board);

		//For getting Players input
		inputCord(board, p1, p2);

		if (i >= 5)					//for checking Game Result after 4 - first turns
			result = checkresult(board, p1, p2);

		//For checking that either player-1 has won or not
		if (result == 1 || result == -1)
			break;
	}

	//for separating RESULT
	for (int i = 0; i < 80; i++)
		cout << "=";

	//Displays result
	cout << endl << setw(46) << "GAME RESULT\n";

	if (result == 1)
		cout << "\n" << setw(50) << "****Player-1 WON****\n";
	else if (result == -1)
		cout << "\n" << setw(50) << "****Player-2 WON****\n";
	else
		cout << "\n" << setw(50) << "********DRAW********\n";

	//Displays Final Board
	displayBoard(board);

	//For formatting output
	for (int i = 0; i < 80; i++)
		cout << "~";

	cout << endl;
	return 0;
}

//For displaying GameBoard
void displayBoard(char board[][3])
{
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << setw(34);
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j];
			if (j != 2)
				cout << "  |  ";
		}
		cout << "\n";

		if (i != 2)
			cout << setw(34);

		for (int k = 1; k <= 13 && i != 2; k++)
			cout << "_";

		cout << "\n\n";
	}
}

//For getting player input
void inputCord(char board[][3], char p1, char p2)
{
	static int turn = 1;
	static char comp[3][3];
	int x, y;

	//For Player-1
	if (turn % 2 == 1)
	{
		do
		{
			cout << "Player-1 turn:\t";
			cin >> x >> y;
			if (x < 0 || y < 0 || x>3 || y>3 || comp[x][y] == '.')
				cout << "Invalid Input......\n";
		} while (x < 0 || y < 0 || x>3 || y>3 || comp[x][y] == '.');
		comp[x][y] = '.';
		board[x][y] = p1;
	}

	//For Player-2
	else
	{
		do
		{
			cout << "Player-2 turn:\t";
			cin >> x >> y;
			if (x < 0 || y < 0 || x>3 || y>3 || comp[x][y] == '.')
				cout << "Invalid Input......\n";
		} while (x < 0 || y < 0 || x>3 || y>3 || comp[x][y] == '.');
		comp[x][y] = '.';
		board[x][y] = p2;
	}

	turn++;
}

//For checking game-result
int checkresult(char board[][3], char p1, char p2)
{
	//For checking that either player-1 has won or not
	if (
		board[0][0] == p1 && board[0][0] == board[0][1] && board[0][1] == board[0][2] ||
		board[1][0] == p1 && board[1][0] == board[1][1] && board[1][1] == board[1][2] ||
		board[2][0] == p1 && board[2][0] == board[2][1] && board[2][1] == board[2][2] ||
		board[0][0] == p1 && board[0][0] == board[1][0] && board[1][0] == board[2][0] ||
		board[0][1] == p1 && board[0][1] == board[1][1] && board[1][1] == board[2][1] ||
		board[0][2] == p1 && board[0][2] == board[1][2] && board[1][2] == board[2][2] ||
		board[0][0] == p1 && board[0][0] == board[1][1] && board[1][1] == board[2][2] ||
		board[0][2] == p1 && board[0][2] == board[1][1] && board[1][1] == board[2][0]
		)
		return 1;			//returns '1' if Player-1 Won

	//For checking that either player-2 has won or not if above conditions are false
	else if (
		board[0][0] == p2 && board[0][0] == board[0][1] && board[0][1] == board[0][2] ||
		board[1][0] == p2 && board[1][0] == board[1][1] && board[1][1] == board[1][2] ||
		board[2][0] == p2 && board[2][0] == board[2][1] && board[2][1] == board[2][2] ||
		board[0][0] == p2 && board[0][0] == board[1][0] && board[1][0] == board[2][0] ||
		board[0][1] == p2 && board[0][1] == board[1][1] && board[1][1] == board[2][1] ||
		board[0][2] == p2 && board[0][2] == board[1][2] && board[1][2] == board[2][2] ||
		board[0][0] == p2 && board[0][0] == board[1][1] && board[1][1] == board[2][2] ||
		board[0][2] == p2 && board[0][2] == board[1][1] && board[1][1] == board[2][0]
		)
		return -1;			//returns '-1' if Player-2 Won

	else
		return 0;			//returns '0' if GAME DRAW
}