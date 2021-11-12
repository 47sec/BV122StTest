#include<iostream>
#include<Windows.h>
#include<conio.h>

void setCursorPosition(int x, int y)
{
	static const HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	std::cout.flush();
	COORD coord = { (SHORT)x, (SHORT)y };
	SetConsoleCursorPosition(hOut, coord);
}

int main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	//system("65001");
	//setlocale(LC_ALL, "ru");
	int position = 1;
	int choose = 1;
	system("cls");
	while (_kbhit() == 0)
	{
		std::cout << "\n\t\t  \244\244\244 BV122StTest \244\244\244";
		std::cout << "\n\t\t \244 Работа над GitHub \244\n";
		std::cout << "\n\t\t     press any key\n";
		std::cout << "............................................................";
		Sleep(1000);
		setCursorPosition(0, 4);
		std::cout << "\t\t                  ";
		Sleep(300);
		setCursorPosition(0, 3);
		std::cout << "\n\t\t     press any key\n";
		setCursorPosition(0, 0);
		std::cout.flush();
	}
	system("cls");

	std::cout << "x1. �������� ������ \n 2. ����� ������� � �������� \n 3. ������� ����� ��������� �� ��������� (\\) \
            \n 4. ����� �������� ���������������. \n 0. ������� ��������� \n";
	while (_getch == 0)
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
		//system("cls");
		switch (position)
		{
		case 1:
			while (_kbhit() == 0)
			{
				Sleep(250);
				std::cout << "-=- 1. �������� ������ -=-\n";
				std::cout << "2. ����� ������� � ��������\n";
				std::cout << "3. ������� ����� ��������� �� ��������� (\\)\n";
				std::cout << "4. ����� �������� ���������������.\n";
				std::cout << "0. ������� ���������\n";
				//system("cls");
			}

			break;

		case 2:
			while (_kbhit() == 0)
			{
				Sleep(250);
				std::cout << "1. �������� ������ \n";
				std::cout << "2.-=- ����� ������� � �������� -=-\n";
				std::cout << "3. ������� ����� ��������� �� ��������� (\\)\n";
				std::cout << "4. ����� �������� ���������������.\n";
				std::cout << "0. ������� ���������\n";
				system("cls");
			}
			break;

		case 3:
			while (_kbhit() == 0)
			{
				Sleep(250);
				std::cout << "1. �������� ������\n";
				std::cout << "2. ����� ������� � ��������\n";
				std::cout << "3.-=- ������� ����� ��������� �� ��������� (\\) -=-\n";
				std::cout << "4. ����� �������� ���������������.\n";
				std::cout << "0. ������� ���������\n";
				system("cls");

			}
			break;

		case 4:
			while (_kbhit() == 0)
			{
				Sleep(250);
				std::cout << "1. �������� ������\n";
				std::cout << "2. ����� ������� � ��������\n";
				std::cout << "3. ������� ����� ��������� �� ��������� (\\)\n";
				std::cout << "4.-=- ����� �������� ���������������. -=-\n";
				std::cout << "0. ������� ���������\n";
				system("cls");
			}
		case 0:
			while (_kbhit() == 0)
			{
				Sleep(250);
				std::cout << "1. �������� ������\n";
				std::cout << "2. ����� ������� � ��������\n";
				std::cout << "3. ������� ����� ��������� �� ��������� (\\)\n";
				std::cout << "4. ����� �������� ���������������.\n";
				std::cout << "-=- 0. ������� ��������� -=-\n";
				system("cls");
			}
		default:
			break;
		}
		if (_getch() == 13)
		{
			switch (position)
			{
			case 1:
				// ����� ������ �������
				system("pause");
				break;
			case 2:
				//  ������� ������ ���� � ���
				system("pause");
				break;
			case 3:
				// ����� �� ���������
				system("pause");
				break;
			case 4:
				// ������ ������� ����� �������

				system("pause");
				break;
			case 0:

				return 0;
				system("pause");
				break;
			default:
				std::cout << "������\n";
				system("pause");
				break;
			}
		}
	}


	return position;
}