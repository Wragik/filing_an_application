#pragma once
#include <iostream>	
#include<fstream>
#include <string>
#include <sstream>
#include<windows.h>
using namespace std;
extern string uss;
extern bool final;
extern string filename;
class Balla
{
	string  o1;
	string f;
	bool auth, num = false;
	string p, u, b, n;
	int z, nam,f1;
	bool nop = false;
	char pop = ',';
	double g;

public:
	void WriteName(string a)
	{


		if (num == false)
		{
			fstream spisok;
			spisok.open("Sp_Full.txt", fstream::in | fstream::app);
			if (spisok.is_open())
			{
				spisok << uss << '\t';
				spisok << a << '\t';
			}
			else
			{
				cout << "������";
			}
			spisok.close();
		}
		else
		{
			cout << "������\n";
			menu();
		}
		num = false;
	}
	void WriteBall(double b)
	{

		if (nop == true)
		{
			o1 = to_string(b);
			fstream spisok;
			spisok.open("Sp_Full.txt", fstream::in | fstream::app);
			if (spisok.is_open())
			{

				spisok << o1 << "" << endl;
			}
			else
			{
				cout << "������";

			}
			spisok.close();
		}


	}
	void menu()
	{

		//system("cls");
		auth = true;
		while (auth)
		{
			if (final == true)
			{
				cout << "0 - ����������� ����������\n";
			}
			cout << "1 - ������ ���������.\n";
			cout << "2 - ���������� ������\n";
			cout << "3 - �����\n";
			cin >> z;
			if (final == true && z == 0)
			{
				fstream input;
				input.open(filename, fstream::in | fstream::app | fstream::out);
				if (input.is_open())
				{
					while (input >> u >> p >> b)
					{

						cout << " \n" << p << " " << b;

					}
					input.close();
					cout << "\n";
				}
				else
				{
					cout << "������";
				}
				system("pause");
				system("cls");
			}
			if (z == 1)
			{
				cout << "������� ��� �� ������� <<�������_������>>" << endl;
				cin >> f;
				try {
					f1 = stoi(f);
				}
				catch (...)
				{
					cout << "������� ������� ��� ������ ��������� �� ������� <<4,56>> " << endl;
					cin >> n;
					for (int i = 0; i < n.length(); i++)
					{
						if (pop == n[i])
						{
							//cout << "�����\n";
							nop = true;

						}
					}
					g = stof(n);
					if (nop == true)
					{
						if (g >= 2.0 && g <= 5.0)
						{

							WriteName(f);
							WriteBall(g);
							nop = false;
							cout << "����������� ������ �������\n";
							system("pause");
							system("cls");
						}
						else
						{
							cout << "�� ���������� ������\n";
							system("pause");
							system("cls");

							menu();
						}
					}
					else
					{
						cout << "�� ���������� ������\n";
						system("pause");
						system("cls");
					}
				}
				cout << "������. �������� �������� �����.\n";	
			
				
				
				
				
				
				



			}
			if (z == 2)
			{

				ifstream input("Sp_Full.txt");
				if (input.is_open())
				{
					while (input >> u >> p >> b)
					{
						cout << p << " " << b << " \n";

					}
					input.close();
					cout << "\n";
					system("pause");
					system("cls");
				}
				else
				{
					cout << "������, ����� �� ����������\n";
					system("pause");
					system("cls");

				}
				input.close();

			}
			if (z == 3)
			{
				auth = false;
				break;
			}

			cin.clear();
			cin.get();
			system("cls");
			menu();
		}
	}
};




