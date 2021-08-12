#include<iostream>
using namespace std;
//#define Pointer_basics
#define POINTERS_AND_ARRAYS //указатели и массивы

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef Pointer_basics
	cout << "Hello Pointers" << endl;
	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl;
	cout << pa << endl;
	cout << *pa << endl;

	int* pb;
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;
#endif // Pointer_basics
#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	short arr[n] = { 3, 5, 8, 13, 21 };
	cout << arr << endl;
	cout << *arr << endl;

	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << "\n";
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS


}