#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <windows.h>
using namespace std;

int main()
{
	const int HIGHT_WIDTH = 3;
	const int ROWS = 3;
	const int COLUMNS = 3;
	int Player1 = 0;
	int Player2 = 0;
	bool Continue = false;
	bool Turns = false;
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

	
	cout << "Player 1, select a space where to place your 'X' " << endl;
	Continue = false;
	cin >> Player1;
	do
	{

	
		switch (Player1)
		{
		case 0:
			if (board[0][0] != ' ')
			{
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
			}
			else
			{
				board[2][2] = 'x';
				Continue = true;
			}
			break;
		default:
			cout << "Opcion no valida" << endl;
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
	////////////////////Waiting for Player2 Input////////////////////
	cout << "Now, Player 2, select a space where to place your 'O' " << endl;
	Continue = false;
	cin >> Player2;
	do
	{

		switch (Player2)
		{
		case 0:
			if (board[0][0] != ' ')
			{
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
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
				cout << "Ese espacio ya se selecciono, elige otro" << endl;
			}
			else
			{
				board[2][2] = 'O';
				Continue = true;
			}
			break;
		default:
			cout << "Opcion no valida" << endl;
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


	} while (Turns == false);
}
