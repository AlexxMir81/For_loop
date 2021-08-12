#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите колиество элементов массива:"; cin >> n;
	int* arr = new int[n] {};
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	delete[] arr;
}