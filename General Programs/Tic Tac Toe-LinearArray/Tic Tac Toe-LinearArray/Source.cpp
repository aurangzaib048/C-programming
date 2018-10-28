/*
Program for simple "TIC TAC TOE" game for 2-Players using "Linear Array".
=>Also displays "Invalid Input" message if entered place is already used.
=>Also ask Players for choosing their character\symbol in game.
*/

#include<iostream>
#include<iomanip>
using namespace std;

//Function Declarations
void displayBoard(char[]);
void inputCord(char[], char, char);
int checkresult(char[], char, char);

int main()
{
	char board[9]= { '1', '2', '3', '4', '5', '6', '7', '8', '9' };			//LinearArray for gameboard
	int result = 0;
	char p1, p2;

	//for getting Player symbols
	//for player-1
	do
	{
		cout << "Enter character\\symbol for Player-1 (Except Digits [0-9]):\t";
		cin >> p1;
		if (p1 >= 48 && p1 <= 57)
			cout << "Invalid Input........\n";
	} while (p1 >= 48 && p1 <= 57);
	//for player-2
	do
	{
		cout << "Enter character\\symbol for Player-2 (Except Digits [0-9]):\t";
		cin >> p2;
		if (p2 >= 48 && p2 <= 57)
			cout << "Invalid Input........\n";
	} while (p2 >= 48 && p2 <= 57);

	//For getting 9 inputs
	for (int i = 1; i <= 9; i++)
	{
		system("cls");						//Clear's screen after every input
		cout << "Player-1 = " << p1 << "\nPlayer-2 = " << p2 << "\nEnter Position as shown below in GameBoard:\n";	//Displays message

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
void displayBoard(char board[])
{
	for (int i = 0; i < 9; i++)
	{
		if (i % 3 == 0)			//For Index (0,3,6)
			cout << endl << setw(34);

		cout << board[i];		//Displays board[i]

		if (i == 2 || i == 5 || i == 8)
		{
			cout << "\n";
			cout << setw(34);
			for (int k = 1; k <= 13 && i != 8; k++)
				cout << "_";
			cout << "\n";
		}
		else					//For index (2,5,8)
			cout << "  |  ";
	}
}

//For getting player input
void inputCord(char board[], char p1, char p2)
{
	static int turn = 1;
	static char comp[9];
	int position;

	//For Player-1
	if (turn % 2 == 1)
	{
		do
		{
			cout << "Player-1 turn:\t";
			cin >> position;
			if (position < 1 || position > 9 || comp[position - 1] == '0')
				cout << "Invalid Input......\n";
		} while (position < 1 || position > 9 || comp[position - 1] == '0');
		comp[position - 1] = '0';
		board[position - 1] = p1;
	}

	//For Player-2
	else
	{
		do
		{
			cout << "Player-2 turn:\t";
			cin >> position;
			if (position < 1 || position > 9 || comp[position - 1] == '0')
				cout << "Invalid Input......\n";
		} while (position < 1 || position > 9 || comp[position - 1] == '0');
		comp[position - 1] = '0';
		board[position - 1] = p2;
	}

	turn++;
}

//For checking game-result
int checkresult(char board[], char p1, char p2)
{
	//For checking that either player-1 has won or not
	if (
		board[0] == p1 && board[0] == board[1] && board[1] == board[2] ||
		board[3] == p1 && board[3] == board[4] && board[4] == board[5] ||
		board[6] == p1 && board[6] == board[7] && board[7] == board[8] ||
		board[0] == p1 && board[0] == board[3] && board[3] == board[6] ||
		board[1] == p1 && board[1] == board[4] && board[4] == board[7] ||
		board[2] == p1 && board[2] == board[5] && board[5] == board[8] ||
		board[0] == p1 && board[0] == board[4] && board[4] == board[8] ||
		board[2] == p1 && board[2] == board[4] && board[4] == board[6]
		)
		return 1;			//returns '1' if Player-1 Won

	//For checking that either player-2 has won or not if above conditions are false
	else if (
		board[0] == p2 && board[0] == board[1] && board[1] == board[2] ||
		board[3] == p2 && board[3] == board[4] && board[4] == board[5] ||
		board[6] == p2 && board[6] == board[7] && board[7] == board[8] ||
		board[0] == p2 && board[0] == board[3] && board[3] == board[6] ||
		board[1] == p2 && board[1] == board[4] && board[4] == board[7] ||
		board[2] == p2 && board[2] == board[5] && board[5] == board[8] ||
		board[0] == p2 && board[0] == board[4] && board[4] == board[8] ||
		board[2] == p2 && board[2] == board[4] && board[4] == board[6]
		)
		return -1;			//returns '-1' if Player-2 Won

	else
		return 0;			//returns '0' if GAME DRAW
}