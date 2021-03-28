#include<iostream>
using namespace std;

char arr[9] = { '1','2','3','4','5','6','7','8','9' };
int cheakWin();
void board();
void move(int P, int M);

int main()
{
	system("cls");
	int player = 2, cheak, MakeMove;

	do
	{
		if (player == 1)
		{
			player++;
		}
		else
		{
			player--;
		}
		
		board();
		cout << "player " << player << " Turn" << endl;
		do
		{
			cout << "Enter Number (1 - 9): "; cin >> MakeMove;
		} while (MakeMove < 1 || MakeMove>9);
		move( player, MakeMove);
		cheak = cheakWin();
	} while (cheak != 1);
	board();
	
	if (cheak==1)
	{
		cout << "\aPlayer" << player << " Win" << endl;
	}

}

void board()
{
	system("cls");
	cout << "       Tic-Tac-Toe" << endl << endl;
	cout << "  " << arr[0] << "    |    " << arr[1] << "    |    " << arr[2] << endl;
	cout << "--------------------------" << endl;
	cout << "  " << arr[3] << "    |    " << arr[4] << "    |    " << arr[5] << endl;
	cout << "--------------------------" << endl;
	cout << "  " << arr[6] << "    |    " << arr[7] << "    |    " << arr[8] << endl;
	cout << endl << "player1 = X" << endl;
	cout << "Player2 = O" << endl << endl;
}

void move( int P, int M)
{
	char mark;
	if (P == 1)
	{
		mark = 'X';
	}
	else
	{
		mark = 'O';
	}
	if (M == 1&&arr[0]=='1')
	{
		arr[0] = mark;
	}
	if (M == 2&&arr[1]=='2')
	{
		arr[1] = mark;
	}
	if (M == 3 && arr[2] == '3')
	{
		arr[2] = mark;
	}
	if (M == 4 && arr[3] == '4')
	{
		arr[3] = mark;
	}
	if (M == 5 && arr[4] == '5')
	{
		arr[4] = mark;
	}
	if (M == 6 && arr[5] == '6')
	{
		arr[5] = mark;
	}
	if (M == 7 && arr[6] == '7')
	{
		arr[6] = mark;
	}
	if (M == 8 && arr[7] == '8')
	{
		arr[7] = mark;
	}
	if (M == 9 && arr[8] == '9')
	{
		arr[8] = mark;
	}
}

int cheakWin()
{
	if (arr[0] == arr[1] && arr[1] == arr[2])
	{
		return 1;
	}
	else if (arr[3] == arr[4] && arr[4] == arr[5])
	{
		return 1;
	}
	else if (arr[6] == arr[7] && arr[7] == arr[8])
	{
		return 1;
	}
	else if (arr[0] == arr[3] && arr[3] == arr[6])
	{
		return 1;
	}
	else if (arr[1] == arr[4] && arr[4] == arr[7])
	{
		return 1;
	}
	else if (arr[2] == arr[5] && arr[5] == arr[8])
	{
		return 1;
	}
	else if (arr[0] == arr[4] && arr[4] == arr[8])
	{
		return 1;
	}
	else if (arr[2] == arr[4] && arr[4] == arr[6])
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
