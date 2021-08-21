#include<iostream>
using namespace std;
void exchange(int& a, int& b);
void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2;
	int b = 3;
	cout << a << "\t" << b << endl;
	exchange(a, b);
	cout << a << "\t" << b << endl;

}

void exchange(int& a, int& b)
{
	int buffer = a;
	a =b;
	b = buffer;
}