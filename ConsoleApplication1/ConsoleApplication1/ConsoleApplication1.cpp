// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <cmath>
#include <conio.h>
#include <string>
#include <iostream>
#include <windows.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	char ch;
	int code;
	char s[256][256];
	int i, j, a = 10, b = 10, I, x, y,l=0;
	int k = 0;
	x = 3- 1;
	y = 4 - 1;


	while (1)
	{
		goto metka;
		metka1:
		l = 1;
		goto metka2;
		metka:
		ch = _getch();
		code = static_cast<int>(ch);
		//-------------------------------------------
		if (ch == 'f')
			l = 1;
		metka2:
		if (l == 1){
			x = x + 1;system("timeout/t 0.9 ");
			system("cls");
			
			
		}
	//------------------------------------------------------------------
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			s[i][j] = ' ';
			if (l == 1)
				s[x][y] = '*';


			cout << s[i][j];
		}cout << endl;
	}if (l = 1)
		goto metka1;
}

//system("pause");
return 0;
	}
