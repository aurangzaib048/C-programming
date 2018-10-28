//Muhammad Zubair
//BCSF14M029

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

const int WORDS=10,
		  LENGTH=20;
char words[WORDS][LENGTH]={"EMMAROBERTS","CONJURING","NATIONAL",
						   "MICROSOFT","EASY","PAKISTAN",
						   "ALEXANDER","LONDON","DIFFICULT",
						   "ISLAMABAD"};

int word_length(int);
void spacesTOzero(int,char*);
void word_spaces(int,char*);
void take_input(int,char*);
bool find_character(int,int,int,char*,char*);
void guessed_letters(int,char*);
bool for_win(int,char*);
void hangman(int);

int main()
{
	char again;
	cout << "\t\tWELCOME TO HANGMAN GAME\n";
	do
	{
		cout << "Guess the letters.You have seven chances to win the game.\n";
		unsigned seed=time(0);
		srand(seed);
		int index=1+rand()%10;
		int wordLength=word_length(index);
		index-=1;
		char* spaces=new char[wordLength+1];
		char* input=new char[wordLength+8];
		spacesTOzero(wordLength,spaces);
		word_spaces(wordLength,spaces);
		int count=0,death=0,wins=0;
		bool win=0;
		//system("pause");
		//system("cls");
		while(!win&&death<7)
		{
			take_input(count,input);
			system("cls");
			bool flag1=find_character(index,count,wordLength,input,spaces);
			word_spaces(wordLength,spaces);
			guessed_letters(count,input);
			if(!flag1)
				death++;
			hangman(death);
			count++;
			win=for_win(wordLength,spaces);
		}
		if(win)
			cout << "Congrats!You won!";
		else
			cout << "Alas!You lost!"
				 << "\nThe exact word was --> "
				 << words[index];
		cout << endl;
		system("pause");
		system("cls");
		delete []spaces;
		delete []input;
		spaces=0;
		input=0;
		cout << "Would you like to play again?(Y/N)\n";
			cin >> again;
		system("cls");}while(toupper(again)=='Y');
	cout << "Thank you for playing the game."
		 << "\nIf you find any errors , kindly submit at zubairpunjab@yahoo.com"
		 << "\nThank You! :)\n";
	cout << "\t\tOUR PRODUCTIONS!"
		 << static_cast<char>(1);
	cout << endl;
	system("pause");
	return 0;
}

int word_length(int index)
{
	int wordLength;
	switch(index)
	{
	case 1:
		wordLength=11;
		break;
	case 2:
		wordLength=9;
		break;
	case 3:
		wordLength=8;
		break;
	case 4:
		wordLength=9;
		break;
	case 5:
		wordLength=4;
		break;
	case 6:
		wordLength=8;
		break;
	case 7:
		wordLength=9;
		break;
	case 8:
		wordLength=6;
		break;
	case 9:
		wordLength=9;
		break;
	case 10:
		wordLength=9;
		break;
	}
	return wordLength;
}

void spacesTOzero(int wordlength,char* spaces)
{
	for ( int i=0 ; i<wordlength ; i++ )
	{
		spaces[i]=0;
	}
}

void word_spaces(int wordlength,char* spaces)
{
	for ( int i=0 ; i<wordlength ; i++ )
	{
		if(spaces[i]==0)
			cout << "_ ";
		else
			cout << spaces[i] << " ";
	}
	cout << endl;
}

void take_input(int position,char* input)
{
	cout << "\nPick a letter --> ";
		cin >> input[position];
	for( int i=0 ; i<position ; i++ )
	{
		while(input[position]==input[i])
		{
			cout << "You already entered --> "
				 << static_cast<char>(toupper(input[position]))
				 << "\nPick some other letter --> ";
				cin >> input[position];
		}
	}
}

bool find_character(int index,int position,int wordlength,char* input,char* spaces)
{
	bool flag=0;
	for( int i=0 ; i<wordlength ; i++ )
	{
		if(words[index][i]==toupper(input[position]))
		{
			spaces[i]=toupper(input[position]);
			flag=1;
		}
	}
	if(flag)
		cout << "Good!";
	else
		cout << "Wrong!";
	cout << endl;
	return flag;
}

void guessed_letters(int length,char* input)
{
	cout << "Guessed letters --> ";
	for(int i=0 ; i<=length ; i++ )
	{
		cout << static_cast<char>(toupper(input[i])) << " ";
	}
	cout << endl;
}

bool for_win(int wordlength,char* spaces)
{
	for( int i=0 ; i<wordlength ; i++ )
	{
		if(spaces[i]==0)
			return 0;
	}
	return 1;
}

void hangman(int death)
{
	switch(death)
	{
	case 0:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |    	\n"
				 << "  |  \n"
				 << "  |   \n"
				 << "  |   \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 1:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |  \n"
				 << "  |   \n"
				 << "  |   \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 2:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |     | \n"
				 << "  |        \n"
				 << "  |        \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 3:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |    \\| \n"
				 << "  |        \n"
				 << "  |        \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 4:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |    \\|/ \n"
				 << "  |      	 \n"
				 << "  |         \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 5:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |    \\|/ \n"
				 << "  |     |	 \n"
				 << "  |         \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 6:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |    \\|/ \n"
				 << "  |     |	 \n"
				 << "  |    /    \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	case 7:
		{
			cout << "   _____	\n"
				 << "  |     |	\n"
				 << "  |     O	\n"
				 << "  |    \\|/ \n"
				 << "  |     |	 \n"
				 << "  |    / \\  \n"
				 << "  |\n"
				 << "__|__";
			break;
		}
	}
	cout << endl;
}
				 


