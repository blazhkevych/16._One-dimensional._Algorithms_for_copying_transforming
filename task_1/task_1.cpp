/*
1. Создать массив из 10 целых случайных чисел. Изменить порядок
следования элементов массива на противоположный (0-й элемент
меняется с 9-м, 1-й элемент с 8-м и т.д.).
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(0));

	int min{ 10 };
	int max{ 99 };
	const int arr_1_Size{ 10 };

	int arr_1[arr_1_Size]{ 0 };

	for (int i = 0; i < arr_1_Size; i++) // заполняем 1 массив и выводим
	{
		arr_1[i] = rand() % (max - min + 1) + min;
		cout << arr_1[i] << ' ';
	}
	cout << endl;

	for (int i = 0; i < arr_1_Size / 2; i++) // в центральной части, условии, не заблуждаемся и не учитываем сдвиги, счет не с 0 а с 1 !
	{
		int temp = 0;
		temp = arr_1[i];
		arr_1[i] = arr_1[arr_1_Size - i - 1];
		arr_1[arr_1_Size - i - 1] = temp;
	}

	for (int i = 0; i < arr_1_Size; i++) // заполняем 1 массив и выводим
		cout << arr_1[i] << ' ';

	return 0;
}