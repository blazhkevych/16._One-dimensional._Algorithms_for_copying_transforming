/*
3. ������� ��� ������� A � B �� 5 ���������. ������� ������ ������
C �� 10 ���������, � ������� ���������� �������� �� ������� �
������� ������� ���������� (��������, �[0]=A[0], �[1]=B[0],
C[2]=A[1], C[3]=B[1] � �.�.).
*/
// �� ������

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	setlocale(LC_ALL, ""); // �������� ������ � ������� ������
	srand(time(0));

	int min{ 0 };
	int max{ 100 };
	const int arr_1_Size{ 10 };

	int arr_1[arr_1_Size]{ 0 };

	for (int i = 0; i < arr_1_Size; i++) // ��������� 1 ������ � �������
	{
		arr_1[i] = rand() % (max - min + 1) + min;
		cout << arr_1[i] << ' ';
	}
	cout << endl;


	return 0;
}