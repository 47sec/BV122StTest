#include <iostream>
#include <fstream>


int func(int arr[][], int size_col, int size_str)
{




}

int main()

{
	setlocale(LC_ALL, "rus");

	std::ifstream file("C:\\Users\\BV122\\source\\repos\\BV122StTest\\test_fail.txt\\test_fail.txt");
	// создаем объект класса ifstream
	file.open("C:\\Users\\BV122\\source\\repos\\BV122StTest\\test_fail.txt"); 

	int coln=0;
	int arr[n][n];

	if (!file)
	{
		std::cout << "Файл не открыт\n\n";
		return -1;
	}
	else
	{
		std::cout << "Все ОК! Файл открыт!\n\n";
	
	}



}