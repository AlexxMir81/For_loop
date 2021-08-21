#include<iostream>
#include<windows.h>
using namespace std;

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	setlocale(LC_ALL, "");
	//char str[] = { 'H','e','l','l','o', 0};
	//char str[] = "Hello";
	//cout << str << endl;
	const int n = 20;
	char str[n];
	cout << "¬ведите строку: "; 
	//cin >> str;
	cin.getline(str, n);
	cout << str << endl;

}