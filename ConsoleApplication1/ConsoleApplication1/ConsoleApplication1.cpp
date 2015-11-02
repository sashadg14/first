// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>
#include <conio.h>
#include <string>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	int code;
	char s[256][256];
	int i, j, a = 10, b = 10, I, x, y;
	int k = 0;
	x = a - 1;
	y = b - 1;
	while (1)
	{
	ch = _getch();
	code = static_cast<int>(ch);
	//-------------------------------------------

	if (ch == 'w'){
	x = x - 1;
	k = 0;
	system("cls");
	}
	if (ch == 's'){
	x = x + 1;
	k = 1;
	system("cls");
	}
	if (ch == 'a'){
	y = y - 1;
	k = 2;
	system("cls");
	}
	if (ch == 'd'){
	y = y + 1;
	k = 3;
	system("cls");
	}
	//------------------------------------------------------------------
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			s[i][j] = ' ';
			s[x][y] = '0';
			if (k == 0)
				s[x - 1][y] = '|';
			if (k == 1)
				s[x + 1][y] = '|';
			if (k == 2)
				s[x][y - 1] = '=';
			if (k == 3)
				s[x][y + 1] = '=';
			cout << s[i][j];
		}cout << endl;
	}
}

//system("pause");
return 0;
	}
