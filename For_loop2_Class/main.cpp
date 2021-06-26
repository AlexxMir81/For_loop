#include<iostream>
using namespace std;
void main()
#define tab "\t"
//#define POWER
//#define Pythagoras
//#define SQUARE
//#define TRIANGLE1
//#define TRIANGLE2
//define TRIANGLE3
//#define TRIANGLE4
#define TRIANGLE5
//#define TRIANGLE6
{
	setlocale(LC_ALL, "Russian");
#if defined POWER
	double a; //основание степени
	int n; //показатель степени
	double N=1; //результат
	cout << "введите основание степени: "; cin >> a;
	cout << "введите показатель степени: "; cin >> n;
	if (n < 0)
	{
		a = 1 / a;
		n *= -1;
	}
	for (int i = 0; i < n; i++)
	{
		N *= a;
	}
	cout << a << "^" << n << "=" <<N;

#endif
#if defined ASCII
	cout << "ASCII-таблица" << endl;
	setlocale(LC_ALL, "C");
	for (int i = 0; i <= 255; i ++)
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
	
	}
	cout << endl;
	setlocale(LC_ALL, "Russian");
	cout << "Таблицы выведена";
#endif
#if defined Pythagoras

	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if ((i * j) < 100) cout << " ";
			if ((i * j) < 10) cout << " ";
			cout << i * j << tab;
		}
		cout << endl;
	}
#endif
	int n;
	cout << "Введите размер фигуры: "; cin >> n;
#if defined SQUARE	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#if defined TRIANGLE1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif
#if defined TRIANGLE2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif
#if defined TRIANGLE3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++) cout << "  ";
		for (int j = i; j < n; j++) cout << "* ";
		cout << endl;
	}

#endif
#if defined TRIANGLE4
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= n-1; j++) cout << "  ";
		for (int j = 0; j <= i; j++) cout << "* ";
		cout << endl;
	}
#endif

#if defined TRIANGLE5
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " ";
		cout << "/";
		for (int j = 0; j < i; j++) cout << "  ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++) cout << " ";
		cout << "\\";
		for (int j = i; j < n-1; j++) cout << "  ";
		cout << "/";
		cout << endl;
	}
#endif
#if defined TRIANGLE6
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) 
			//{ 
			//	cout << "+ "; 
			//}else
			//	cout << "- ";
			//cout << "* ";
		/*	(i + j)%2 == 0 ? cout << "+ " : cout << "- ";*/
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif
	
}