
#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>

using namespace std;
bool final;
string filename;
class admin
{
private:
	string auser = "Ad", upass = "No", us, ps, file, format = ".txt";
	int m, y, z, o, rez;
	char ch;
	bool authA = true;

public:
	void Input()
	{
		cout << "Введите имя пользователя ";
		cin >> us;
		cout << "Введите пароль ";
		cin >> ps;

		if (auser == us && upass == ps)
		{
			cout << "Вход под администраторм успешно совершён\n";
			//Sleep(2000);
			Menu();
		}
		else
		{
			cout << "Неверное имя пользователя или пароль";
		}

	}

	void Acess(int s)
	{
		int m = s;
		system("cls");

		if (m == 1)
		{
			ifstream input("Sp_Full.txt");
			ofstream output("Sp_all.xls");
			if (input.is_open())
			{
				if (output.is_open())
				{
					output << input.rdbuf();
					output.close();
					input.close();
					system("Start D:\\ConsoleApplication2\\ConsoleApplication2\\Sp_all.xls");
					cout << "\n" << "Опубликовать результаты? \n" << "1 - Опубликовать \n" << "2 - Отложить\n";
					cin >> rez;
					if (rez == 1)
					{

						final = true;
						cout << "Введите название файла\n";
						cin >> file;
						filename = file + format;
						ifstream check(filename);
						if (check.is_open())
						{
							cout << "Успешно опубликовано\n";
							system("pause");
						}
						else
						{
							final = false;
							cout << "Произошшла ошибка, возможно не корректно введено название\n";
							system("pause");
						}
					}
					if (rez == 2)
					{
						final = false;
					}

				}
				else
				{
					cout << "Ошибка открытия файла\n";
				}
			}
			else
			{
				cout << "Ошибка открытия файла\n";
			}
			string opa;




		}
		if (m == 2)
		{
			cout << "Какой файл создать\n";
			cout << "1 - С логинами и паролями\n";
			cout << "2 - Список\n";
			cin >> o;
			if (o == 1)
			{

				ofstream doca("Sp_us.txt");
				if (doca.is_open())
				{
					doca << ".User" << '\t' << " Password" << "\n";
				}
				else
				{
					cout << "Ошибка";
				}
				doca.close();
			}

			if (o == 2)
			{
				ofstream doc("Sp_Full.txt");
				if (doc.is_open())
				{
					doc << "User" << '\t' << "          ФИО" << '\t' << "                 Балл\n";
				}
				else
				{
					cout << "Ошибка";
				}
				doc.close();
			}


		}
		if (m == 3)
		{
			cout << "Какой файл открыть\n";
			cout << "1 - Логины и пароли\n";
			cout << "2 - TXT\n";
			cout << "3 - Excel\n";
			cin >> z;
			switch (z)
			{
			case 1:
				system("Start D:\\ConsoleApplication2\\ConsoleApplication2\\Sp_Us.txt");
				break;
			case 2:
				system("Start D:\\ConsoleApplication2\\ConsoleApplication2\\Sp_Full.txt");
				break;
			case 3:
				system("Start D:\\ConsoleApplication2\\ConsoleApplication2\\Sp_all.xls");
				break;

			}

		}
		if (m == 4)
		{
			authA = false;
		}

		Menu();
	}

	void Menu()
	{
		while (authA)
		{
			cin.clear();
			cin.get();
			system("cls");
			cout << "1 - Сформировать файл для результатов\n";
			cout << "2 - Добавить список\n";
			cout << "3 - Открытие файла\n";
			cout << "4 - Выход\n";
			cin >> y;
			Acess(y);

		}

	}
};