#include<iostream>
#include<Windows.h>
#include<conio.h>
#include

int main()
{
	void setcur(int x, int y);//установка курсора на позицию  x y 
	{
		COORD coord;
		coord.X = 0;
		coord.Y = 0;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	};
	setlocale(LC_ALL, "ru");
	int position = 1;
	int choose = 1;
	while (_kbhit() == 0)
	{
		Sleep(500);
		setcur(0, 0);
		std::cout << "\n\t\t  \244\244\244 BV122StTest \244\244\244";
		std::cout << "\n\t\t \244 задание по GitHub \244\n\n";
		Sleep(250);
		std::cout << "\n\t\t    press any key\n............................................................";
	}
	setcur(0, 0);

	//while (_kbhit() == 0)
	{
			std::cout << "x1. показать массив \n 2. найти минимум и максимум \n 3. вывести сумму элементов по диагонали (\\) \
            \n 4. вывод среднего арифметического. \n 0. закрыть программу \n";
			do
			{
				switch (_getch())
				{
				case 72:
					if (position >= 1)
					{
						position--;
					}
					else
					{
						position = 4;
					}
					break;
				case 80:
					if (position <= 4)
					{
						position++;
					}
					else
						position = 1;
					break;
				}
				system("cls");
				switch (position)
				{
				case 1:
					while (_kbhit() == 0)
					{
						Sleep(250);
						std::cout << "-=- 1. показать массив -=-\n";
						std::cout << "2. найти минимум и максимум\n";
						std::cout << "3. вывести сумму элементов по диагонали (\\)\n";
						std::cout << "4. вывод среднего арифметического.\n";
						std::cout << "0. закрыть программу\n";
						setcur(0, 0);
					}

					break;

				case 2:
					while (_kbhit() == 0)
					{
						Sleep(250);
						std::cout << "1. показать массив \n";
						std::cout << "2.-=- найти минимум и максимум -=-\n";
						std::cout << "3. вывести сумму элементов по диагонали (\\)\n";
						std::cout << "4. вывод среднего арифметического.\n";
						std::cout << "0. закрыть программу\n";
						setcur(0, 0);
					}
					break;

				case 3:
					while (_kbhit() == 0)
					{
						Sleep(250);
						std::cout << "1. показать массив\n";
						std::cout << "2. найти минимум и максимум\n";
						std::cout << "3.-=- вывести сумму элементов по диагонали (\\) -=-\n";
						std::cout << "4. вывод среднего арифметического.\n";
						std::cout << "0. закрыть программу\n";
						setcur(0, 0);

					}
					break;

				case 4:
					while (_kbhit() == 0)
					{
						Sleep(250);
						std::cout << "1. показать массив\n";
						std::cout << "2. найти минимум и максимум\n";
						std::cout << "3. вывести сумму элементов по диагонали (\\)\n";
						std::cout << "4.-=- вывод среднего арифметического. -=-\n";
						std::cout << "0. закрыть программу\n";
						setcur(0,0);
					}
				case 0:
					while (_kbhit() == 0)
					{
						Sleep(250);
						std::cout << "1. показать массив\n";
						std::cout << "2. найти минимум и максимум\n";
						std::cout << "3. вывести сумму элементов по диагонали (\\)\n";
						std::cout << "4. вывод среднего арифметического.\n";
						std::cout << "-=- 0. закрыть программу -=-\n";
						setcur(0, 0);
					}
				default:
					break;
				}
				if (_getch() == 13)
				{
					switch (position)
					{
					case 1:
						// вывод масива функция
						system("pause");
						break;
					case 2:
						//  функция вывода макс и мин
						system("pause");
						break;
					case 3:
						// сумма по дианонали
						system("pause");
						break;
					case 4:
						// средне арифмет всего массива
						
						system("pause");
						break;
					case 0:
						
						return 0;
						system("pause");
						break;
					default:
						std::cout << "ошибка\n";
						system("pause");
						break;
					}
				}
			} while (true);
	
	}
	return position;
}