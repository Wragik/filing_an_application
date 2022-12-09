#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>
#include "login.h"
#include "regist.h"
#include "Admin.h"
#include "Ball.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");
	string delet;
	extern int acess;
	extern string uss;
	string a, z, k, o, j;
	string h0;
	int h;
	double b;
	reg q;
	login l;
	Balla nnam;
	admin ad;
	//user u;
	cout << "Выберите действие \n";
	cout << "1 - Регистрация \n";
	cout << "2 - Авторизация \n";
	cin >> h;
	switch (h)
	{
	case 1:
		q.registr();

		break;
	case 2:
		l.log();
		if (acess == 1)
		{
			nnam.menu();
		}
		break;
	case 4:

		system("cls");
		ad.Input();
		break;
	default:

		break;

	}

	//cin.ignore(INT_MAX);
	system("cls");
	cin.clear();
	cin.get();
	main();



}