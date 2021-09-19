#include<iostream>
#include<windows.h>
using namespace std;

int StrLen(char str[]);
void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str []);
void remove_symbol(char str[], char symbol);
bool is_palindrome(char str[]);


void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "");
	//char str[] = { 'H','e','l','l','o', 0};
	//char str[] = "Hello";
	//cout << str << endl;
	const int n = 256;
	char str[n]="Хорошо      живет на     свете       Вини-пух";
	cout << "Введите строку: ";
	//cin >> str;
	cin.getline(str, n);

	cout << str << endl << "Длина строки " << StrLen(str) << endl;

	to_upper(str);
	//cout << str << endl;
	to_lower(str);
	//cout << str << endl;
	shrink(str);
	cout << is_palindrome(str) <<endl;
	cout << str << endl;
}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}

void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (
			str[i] >= 'a' && str[i] <= 'z'||
			str[i] >= 'а' && str[i] <= 'я')
			str[i] -= 32;
	}
}
void to_lower(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (
			str[i] >= 'A' && str[i] <= 'Z'||
			str[i] >= 'А' && str[i] <= 'Я')
			str[i] += 32;
	}
}

void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i; str[j]; j++)
			{
				(str[j] = str[j + 1]);
			}
		}
	}
}

void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)
			{
				(str[j] = str[j + 1]);
			}
		}
	}
}

bool is_palindrome(char str[])
{
	char* buffer = new char[StrLen(str) + 1]{};
	for (int i = 0; str[i]; i++)buffer[i] = str[i];
	remove_symbol(buffer, ' ');
	int n = StrLen(buffer);

	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			delete[] buffer;
			return false;
		}
	}
	delete[] buffer;
	return true;
}
