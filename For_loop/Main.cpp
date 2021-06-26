#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	int n; //число для вычесления факториала
	cout << "Введите число для вычесления Факториала: "; cin >> n;
	double f = 1; //факториал числа
	for (int i = 1; i <= n; i++) 
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	cout << endl;
}