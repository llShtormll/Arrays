#include<iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "");


	int array[5];
	for (int i = 0; i < 5; i++) { cout << "������ " << i + 1 << " ������� ������ :"; cin >> array[i]; }
	cout << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
	for (int i = 5; i > 0; i--)
	{
		cout << array[i - 1] << "\t";
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += array[i];
	}
	cout << "����� ��������� ������ :" << sum << "\n";
	cout << "������� ��������������  :" << sum / 5 << "\n\n\n\n";
}