
#include <iostream>
using namespace std;
string uss;
bool AuthL = false;
int acess;
class login
{
	string user, pass, u, p;
public:
	void log()
	{
		cout << "������� ��� ������������ ";
		cin >> user;
		cout << "������ ������ ";
		cin >> pass;

		fstream input;
		input.open("Sp_us.txt");
		if (input.is_open())
		{
			ifstream input("Sp_us.txt");
		}
		else
		{
			input.close();
			system("cls");
			cout << "���� �� ������\n";
			system("pause");
			return;
		}


		while (input >> u >> p)
		{
			if (u == user && p == pass)
			{
				acess = 1;
			}

		}
		input.close();

		if (acess == 1)
		{
			system("cls");
			cout << "����� ���������� " << user << "\n";
			uss = user;
			cin.get();

		}
		else
		{
			system("cls");
			cout << "\n�������� ����� ��� ������\n";
			system("pause");

		}
	}

};