#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
extern bool reg_b;
class reg
{
	string chlog, a;
	string ruser, rpass, up, pa;
	int auth = 1;
	bool again = false;
	bool i = true;
public:
	void registr()
	{

		cout << "������� ��� ������������ ";
		cin >> ruser;
		cout << "������� ������ ";
		cin >> rpass;
		if (ruser == "Ad")
		{
			return;
		}

		fstream rega;
		rega.open("Sp_us.txt");
		if (rega.is_open())
		{
			fstream rega("Sp_us.txt", fstream::in | fstream::app | fstream::out);
		}
		else
		{
			rega.close();
			system("cls");
			cout << "���� �� ������\n";
			system("pause");
			return;
		}
		while (!rega.eof())
		{
			rega >> up >> pa;
			if (up == ruser)
			{
				again = true;
			}
			else
			{
				again = false;
			}
		}

		if (again == true)
		{
			system("cls");
			cout << "����� ����� ��� ����������\n";
			system("pause");
		}
		else
		{
			regis();

		}
		rega.close();



	}

	void regis()
	{
		fstream rega("Sp_us.txt", fstream::in | fstream::app | fstream::out);

		rega << ruser << '\t' << rpass << '\n';

		system("cls");
		cout << "�������� ����������� \n";
		system("pause");
	}
};

