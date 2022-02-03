/*
4. Написать программу, копирующую один массив в другой
следующим образом: сначала копируются последовательно все
элементы, большие 0, затем последовательно все элементы,
равные 0, а затем последовательно все элементы, меньшие 0.
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // работает только с потоком вывода
	srand(time(0));

	int min{ -9 };
	int max{ 9 };
	const int a_Size{ 10 };
	const int c_Size{ 10 };

	int a[a_Size]{ 0 };
	int c[c_Size]{ 0 };

	for (int i = 0; i < a_Size; i++) // заполняем a массив и выводим
	{
		a[i] = rand() % (max - min + 1) + min;
		cout << a[i] << ' ';
	}
	cout << endl;

	int j{ 0 };
	for (int i = 0; i < c_Size; i++) // копируются последовательно все элементы, большие 0
	{
		if (a[i] > 0)
		{
			c[j] = a[i];
			j++;
		}
	}

	for (int i = 0; i < c_Size; i++) // копируются последовательно все элементы, равны 0
	{
		if (a[i] == 0)
		{
			c[j] = a[i];
			j++;
		}
	}

	for (int i = 0; i < c_Size; i++) // копируются последовательно все элементы, меньше 0
	{
		if (a[i] < 0)
		{
			c[j] = a[i];
			j++;
		}
	}

	for (int i = 0; i < c_Size; i++) // выводим c
	{
		cout << c[i] << ' ';
	}
	cout << endl;

	return 0;
}