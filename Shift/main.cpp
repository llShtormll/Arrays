#include<iostream>

using namespace std;


void main()
{
	setlocale(LC_ALL, "");

	int arr[10] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	int n, k = 0;
	cout << "Ââåäèòå ñìåùåíèå ìàñèâà :"; cin >> n;
	cout << endl;
	for (int i = 0 + n; i < 10 + n; i++)
	{
		if (i < 10)cout << arr[i] << "\t";
		else if (i > 9){k = i - 10;cout << arr[k] << "\t";}
	}

}
