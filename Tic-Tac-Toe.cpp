#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	const int HIGHT_WIDTH = 3;
	const int ROWS = 3;
	const int COLUMNS = 3;
	int Player1 = 0;
	int Player2 = 0;
	bool Continue = false;
	bool CheckWinner = false;
	int TurnCount = 1;
	//char P1 = 'X';
	//char P2 = 'Y';
	void WhoWon(int TurnCheck);
	bool VictoryCheck(char BoardCheck[3][3], int LastPInput);
	char board[ROWS][COLUMNS] = { {' ', ' ', ' '},
								  {' ', ' ', ' '},
								  {' ', ' ', ' '} };

	char boardoptions[ROWS][COLUMNS] = { {'0', '1', '2'},
										 {'3', '4', '5'},
										 {'6', '7', '8'} };




	cout << "Welcome to: " << endl;
	cout << "---TIC TAC TOE--- \n";
	cout << "This are your controls: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << boardoptions[i][j];
		}
		cout << endl;
	}

	cout << "This is your current board: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			cout << board[i][j];
		}
		cout << endl;
	}

	do
	{
		do
		{
			cout << ">>>>>>>>>>>>>>>>>>>>You are on turn [ " << TurnCount << " ]<<<<<<<<<<<<<<<<<<<<" << endl;

			cout << "Player 1, select a space where to place your 'X' " << endl;
			Continue = false;
			cin >> Player1;


			switch (Player1)
			{
			case 0:
				if (board[0][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][0] = 'x';
					Continue = true;
				}
				break;
			case 1:
				if (board[0][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][1] = 'x';
					Continue = true;
				}
				break;
			case 2:
				if (board[0][2] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][2] = 'x';
					Continue = true;
				}
				break;
			case 3:
				if (board[1][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[1][0] = 'x';
					Continue = true;
				}
				break;
			case 4:
				if (board[1][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[1][1] = 'x';
					Continue = true;
				}
				break;
			case 5:
				if (board[1][2] != ' ')
				{
					cout << "Ese espacio ya se selecciono, elige otro" << endl;
				}
				else
				{
					board[1][2] = 'x';
					Continue = true;
				}
				break;
			case 6:
				if (board[2][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][0] = 'x';
					Continue = true;
				}
				break;
			case 7:
				if (board[2][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][1] = 'x';
					Continue = true;
				}
				break;
			case 8:
				if (board[2][2] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][2] = 'x';
					Continue = true;
				}
				break;
			default:
				cout << "Invalid Option" << endl;
				break;
			}

		} while (Continue == false);
		//////////////After First Input///////////////
		cout << "This are your controls: " << endl;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << boardoptions[i][j];
			}
			cout << endl;
		}

		cout << "This is your current board: " << endl;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}
		if (TurnCount > 4)
		{
			CheckWinner = VictoryCheck(board, Player1);
			if (CheckWinner == true)
			{
				WhoWon(TurnCount);
				return 0;
			}
			else if (TurnCount >= 9)
			{
				cout << ">>>>>>>>>>>>Its a DRAW<<<<<<<<" << endl;
				return 0;
			}
		}

		TurnCount++;

		////////////////////Waiting for Player2 Input////////////////////
		do
		{
			cout << ">>>>>>>>>>>>>>>>>>>>You are on turn [ " << TurnCount << " ]<<<<<<<<<<<<<<<<<<<<" << endl;
			cout << "Now, Player 2, select a space where to place your 'O' " << endl;
			Continue = false;
			cin >> Player2;


			switch (Player2)
			{
			case 0:
				if (board[0][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][0] = 'O';
					Continue = true;
				}
				break;
			case 1:
				if (board[0][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][1] = 'O';
					Continue = true;
				}
				break;
			case 2:
				if (board[0][2] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[0][2] = 'O';
					Continue = true;
				}
				break;
			case 3:
				if (board[1][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[1][0] = 'O';
					Continue = true;
				}
				break;
			case 4:
				if (board[1][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[1][1] = 'O';
					Continue = true;
				}
				break;
			case 5:
				if (board[1][2] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[1][2] = 'O';
					Continue = true;
				}
				break;
			case 6:
				if (board[2][0] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][0] = 'O';
					Continue = true;
				}
				break;
			case 7:
				if (board[2][1] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][1] = 'O';
					Continue = true;
				}
				break;
			case 8:
				if (board[2][2] != ' ')
				{
					cout << "That space has already been selected" << endl;
				}
				else
				{
					board[2][2] = 'O';
					Continue = true;
				}
				break;
			default:
				cout << "Invalid option" << endl;
				break;
			}

		} while (Continue == false);

		////////Rinse and repeat//////

		cout << "This are your controls: " << endl;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << boardoptions[i][j];
			}
			cout << endl;
		}

		cout << "This is your current board: " << endl;
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLUMNS; j++)
			{
				cout << board[i][j];
			}
			cout << endl;
		}
		if (TurnCount > 4)
		{
			CheckWinner = VictoryCheck(board, Player2);
			if (CheckWinner == true)
			{
				WhoWon(TurnCount);
				return 0;
			}
		}

		TurnCount++;

	} while (TurnCount < 10);
}


///////////////////////////////////////Checking for the victory condition//////////////////////////
bool VictoryCheck(char BoardCheck[3][3], int LastPInput)
{
	int X = LastPInput / 3;
	int Y = LastPInput % 3;
	bool Win = false;

	if (BoardCheck[X][0] == BoardCheck[X][1] && BoardCheck[X][0] == BoardCheck[X][2])
	{
		Win = true;
		cout << "Case 1" << endl;
	}
	if (BoardCheck[0][Y] == BoardCheck[1][Y] && BoardCheck[0][Y] == BoardCheck[2][Y])
	{
		Win = true;
		cout << "Case 2" << endl;
	}
	if (LastPInput == 0 || LastPInput == 4 || LastPInput == 8)
	{
		if (BoardCheck[0][0] == BoardCheck[1][1] && BoardCheck[0][0] == BoardCheck[2][2])
		{
			Win = true;
			cout << "Case 3" << endl;
		}
	}
	if (LastPInput == 2 || LastPInput == 4 || LastPInput == 6)
	{
		if (BoardCheck[2][0] == BoardCheck[1][1] && BoardCheck[2][0] == BoardCheck[0][2])
		{
			Win = true;
			cout << "Case 4" << endl;
		}
	}
	return Win;
}
////////////////Checking Who won based on the Tunr Number///////////////////////////////
void WhoWon(int TurnCheck)
{
	if (TurnCheck % 2 == 0)
	{
		cout << "O Wins This one!!!!" << endl;

	}
	else
	{
		cout << "X Wins This one!!!!" << endl;
	}
}