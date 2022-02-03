/*
4. Написать программу, копирующую один массив в другой
следующим образом: сначала копируются последовательно все
элементы, большие 0, затем последовательно все элементы,
равные 0, а затем последовательно все элементы, меньшие 0.
*/
// НЕ ГОТОВО

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(0));

	int min{ 0 };
	int max{ 100 };
	const int arr_1_Size{ 10 };

	int arr_1[arr_1_Size]{ 0 };

	for (int i = 0; i < arr_1_Size; i++) // заполняем 1 массив и выводим
	{
		arr_1[i] = rand() % (max - min + 1) + min;
		cout << arr_1[i] << ' ';
	}
	cout << endl;


	return 0;
}