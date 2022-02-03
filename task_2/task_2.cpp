/*
2. Создать массив из 10 целых случайных чисел. Поменять местами
соседние элементы массива (0-й элемент меняется с 1-м, 2-й
элемент с 3-м и т.д.).
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

	for (int i = 0; i < arr_1_Size; i = i + 2)
	{
		int temp = arr_1[i]; // сохрянем элемент с индексом 0
		arr_1[i] = arr_1[i + 1]; // затираем елемент с индексом 1
		arr_1[i + 1] = temp; // возвращаем из темпа элемент с индексом 0 на позицию индекс 1
	}

	for (int i = 0; i < arr_1_Size; i++) // выводим 1 массив 
		cout << arr_1[i] << ' ';

	return 0;
}