#include<iostream>

using namespace std;
//#define ARRAY
//#define BINARY
#define HEXADECIMAL
void main()
{
	setlocale(LC_ALL, "");

#ifdef ARRAY
	int arr[10] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };
	int n, k = 0;
	cout << "¬ведите смещение масива :"; cin >> n;
	cout << endl;
	for (int i = 0 + n; i < 10 + n; i++)
	{
		if (i < 10)cout << arr[i] << "\t";
		else if (i > 9) { k = i - 10; cout << arr[k] << "\t"; }
	}
#endif // ARRAY

#ifdef BINARY
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
#endif // BINARY
#ifdef HEXADECIMAL
	int n, k = 0, i = 4, f = 0, arr[5]{};
	cout << "¬ведите число :"; cin >> n; cout << "\n";
		while (n)
		{

			k = n % 16;
			if (k < 10) arr[i] = 48 + k;
			else if(k >= 10) arr[i] = 55 + k;
			n /= 16;
			--i;
			++f;
		}
	for (int i = 5 - f; i < 5; i++)cout << (char)arr[i];

#endif // HEXADECIMAL

}