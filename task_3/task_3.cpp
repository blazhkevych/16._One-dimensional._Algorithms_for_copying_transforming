/*
3. Создать два массива A и B из 5 элементов. Создать третий массив
C из 10 элементов, в который копируются элементы из первого и
второго массива поочередно (например, С[0]=A[0], С[1]=B[0],
C[2]=A[1], C[3]=B[1] и т.д.).
*/

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
	const int a_Size{ 5 };
	const int b_Size{ 5 };
	const int c_Size{ 10 };

	int a[a_Size]{ 0 };
	int b[b_Size]{ 0 };
	int c[c_Size]{ 0 };

	for (int i = 0; i < a_Size; i++) // заполняем a массив и выводим
	{
		a[i] = rand() % (max - min + 1) + min;
		cout << a[i] << ' ';
	}
	cout << endl;
	for (int i = 0; i < b_Size; i++) // заполняем b массив и выводим
	{
		b[i] = rand() % (max - min + 1) + min;
		cout << b[i] << ' ';
	}
	cout << endl;

	for (int i = 0, j = 0; i < c_Size; i++, j++) // копируются элементы из первого и второго массива поочередно
	{
		c[i] = a[j];
		i++;
		c[i] = b[j];
	}

	for (int i = 0; i < c_Size; i++) // выводим c
	{
		cout << c[i] << ' ';
	}
	cout << endl;

	return 0;
}