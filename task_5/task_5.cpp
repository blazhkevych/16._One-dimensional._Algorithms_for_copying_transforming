/*
5. Написать программу, копирующую элементы одного массива
размером 10 элементов в 2 массива размером 5 элементов
поочередно (например, A[0]=C[0], B[0]=C[1], A[1]=C[2],
B[1]=C[3] и т.д.).
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
	const int b_Size{ 5 };
	const int c_Size{ 5 };

	int a[a_Size]{ 0 };
	int b[b_Size]{ 0 };
	int c[c_Size]{ 0 };

	for (int i = 0; i < a_Size; i++) // заполняем a массив и выводим
	{
		a[i] = rand() % (max - min + 1) + min;
		cout << a[i] << ' ';
	}
	cout << endl;

	int j = 0;
	for (int i = 0; i < a_Size; i++) // копируем элементы одного массива размером 10 в 2 массива размером 5 элементов поочередно
	{
		for (; j < b_Size; )
		{
			b[j] = a[i];
			i++;
			c[j] = a[i];
			j++;
			break;
		}
	}

	for (int i = 0; i < b_Size; i++) // выводим b
	{
		cout << b[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < c_Size; i++) // выводим c
	{
		cout << c[i] << ' ';
	}
	cout << endl;

	return 0;
}