#include<iostream>
#include<Windows.h>
#include<conio.h>

int main()
{

	setlocale(LC_ALL, "ru");
	int position = 1;
	int choose = 1;
	while (_kbhit() == 0)
	{
		Sleep(500);
		system("cls");
		std::cout << "\n\t\t  \244\244\244 BV122StTest \244\244\244";
		std::cout << "\n\t\t \244 ������� �� GitHub \244\n\n";
		Sleep(250);
		std::cout << "\n\t\t    press any key\n............................................................";
	}
	system("cls");

	//while (_kbhit() == 0)
	{
			std::cout << "x1. �������� ������ \n 2. ����� ������� � �������� \n 3. ������� ����� ��������� �� ��������� (\\) \
            \n 4. ����� �������� ���������������. \n 0. ������� ��������� \n";
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
						std::cout << "-=- 1. �������� ������ -=-\n";
						std::cout << "2. ����� ������� � ��������\n";
						std::cout << "3. ������� ����� ��������� �� ��������� (\\)\n";
						std::cout << "4. ����� �������� ���������������.\n";
						std::cout << "0. ������� ���������\n";
						system("cls");
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
			} while (true);
	
	}
	return position;
}