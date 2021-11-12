#include <iostream>
#include <fstream>


int func(int**arr, int size_col, int size_str)
{
	int count = 0;
	for (int i = 0; i < size_col; i++)
	{
		for (int j = 0; j < size_str; j++)
		{ 

			arr[i][j] = count++;

		}
	}

	return 1;
}
void func_print(int** arr, int size_col, int size_str)
{
	for (int i = 0; i < size_col; i++)
	{
		for (int j = 0; j < size_str; j++)
		{

			std::cout << arr[i][j] << '\t';
			std::cout << '\n';
		}
	}
}

int main()

{
	setlocale(LC_ALL, "rus");

	std::ifstream file("C:\\Users\\BV122\\source\\repos\\BV122StTest\\test_fail.txt\\test_fail.txt");
	// создаем объект класса ifstream
	file.open("C:\\Users\\BV122\\source\\repos\\BV122StTest\\test_fail.txt"); 

	int col_n = 2;
	int str_n = 2;
	int** arr;
	arr = new int*[str_n];
	for (size_t i = 0; i <= str_n; i++)
	{
		arr[i] = new int[col_n];
	}
	

	
	if (!file)
	{
		std::cout << "Файл не открыт\n\n";
		return -1;
	}
	else
	{
		std::cout << "Все ОК! Файл открыт!\n\n";
	
	}

	func(arr,col_n, str_n);
	func_print(arr, col_n, str_n);

}