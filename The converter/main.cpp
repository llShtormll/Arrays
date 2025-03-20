#include<iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RU");

	int  i = 19, k = 0, n, f = 0, arr[20] = {};
	cout << "¬ведите число :"; cin >> n; cout << "\n";
	while (n)
	{

		k = n % 2;
		if (k == 0) arr[i] = 0;
		else arr[i] = 1;
		n /= 2;
		--i;
		++f;
	}
	for (int i = 20 - f; i < 20; i++)cout << arr[i] << " ";
	//------------------------------------------------------------
	 k = 0, i = 10, f = 0, arr[10]={};
	cout << endl;
	cout << "¬ведите число :"; cin >> n; cout << "\n";
	while (n)
	{

		k = n % 16;
		if (k < 10) arr[i-1] = 48 + k;
		else if (k >= 10) arr[i-1] = 55 + k;
		n /= 16;
		--i;
		++f;
	}
	for (int i = 10 - f; i < 10; i++)cout << (char)arr[i];
}