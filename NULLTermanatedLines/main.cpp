#include<iostream>
#include<windows.h>
using namespace std;

int string_length(char str[]);

void to_upper(char str[]);
void to_lower(char str[]);
void shrink(char str[]);

bool is_palindrome(char str[]);

bool is_integer(char str[]);
bool is_bin(char str[]);
bool is_hex(char str[]);

int bin2dec(char str[]);
int hex2dec(char str[]);

void dec2bin(int d);
void dec2hex(int h);

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
	cout << "Введите строку: "; 
	//cin >> str;
	cin.getline(str, n);
	to_upper(str);
	cout << str << endl;
	
	to_lower(str);
	cout << str << endl;

	shrink(str);
	cout << str << endl;

	cout << ((is_palindrome(str)==true)?"Это палиндром":"Это не палиндром") << endl;;

	cout << "Введите число: "; cin >> str;
	cout << ((is_integer(str)==true)?"Это целое число":"Это не целое число") << endl;;
	cout << ((is_bin(str)==true)?"Это двоичное число":"Это не двоичное число") << endl;;
	cout << ((is_hex(str)==true)?"Это шестнадцатеричное число":"Это не шестнадцатеричное число") << endl;;

	cout << "Введите двоичиное число: "; cin >> str;
	cout << bin2dec(str) << endl;
	
	cout << "Введите hex-число: "; cin >> str;
	cout << hex2dec(str) << endl;

	int dec;
	cout << "Конверт в bin, введите dec-число, : "; cin >> dec;
	dec2bin(dec);
	cout << "Конверт в hex, введите dec-число: "; cin >> dec;
	dec2hex(dec);


}

int string_length(char str[])
{
	int lenght_string = 0;
	for (int i = 0; str[i] != 0; i++)
	{
		lenght_string++;
	}
	return lenght_string;
}

void to_upper(char str[])
{
	const int n = 60;
	char lower[n]="abcdefghijklmnopqrstuvwxyzабвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	char upper[n]="ABCDEFGHIJKLMNOPQRSTUVWXYZАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";

	for(int i=0; i<string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			str[i] == lower[j] ? str[i] = upper[j] : str[i];
		}
}

void to_lower(char str[])
{
	const int n = 60;
	char lower[n] = "abcdefghijklmnopqrstuvwxyzабвгдеёжзийклмнопрстуфхцчшщъыьэюя";
	char upper[n] = "ABCDEFGHIJKLMNOPQRSTUVWXYZАБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";

	for(int i=0; i<string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			str[i] == upper[j] ? str[i] = lower[j] : str[i];
		}
}

void shrink(char str[])
{
	for(int i=0; i<string_length(str); i++)
		if (str[i] == ' ')
		{
			for(int j=i; str[j]!=0; j++)
			{
				(str[j] = str[j+1]);
			}
		}
}

bool is_palindrome(char str[])
{
	int result=0;
	for (int i = 0; i< string_length(str); i++)
		{
			(str[i] == str[string_length(str)-1-i])? result++: result;
		}
	if (result == string_length(str))
	{
		return true;
	}
	else
		return false;
}

bool is_integer(char str[])
{
	int result = 0;
	const int n = 11;
	char ch_integer[n] = "0123456789";
	for (int i = 0; i < string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			(str[i] == ch_integer[j]) ? result++ : result;
		}
	if(result== string_length(str))
			{
				return true;
			}
			return false;	
}
bool is_bin(char str[])
{
	int result = 0;
	const int n = 3;
	char ch_binary[n] = "01";
	for (int i = 0; i < string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			(str[i] == ch_binary[j]) ? result++ : result;
		}
	if(result== string_length(str))
			{
				return true;
			}
			return false;	
}
bool is_hex(char str[])
{
	int result = 0;
	const int n = 17;
	char ch_hex[n] = "0123456789ABCDEF";
	for (int i = 0; i < string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			(str[i] == ch_hex[j]) ? result++ : result;
		}
	if(result== string_length(str))
			{
				return true;
			}
			return false;	
}

int bin2dec(char str[])
{
	int result = 0;
	int value;
	for (int i = 0; i < string_length(str); i++)
	{
		value = str[i] - '0';
		result = result * 2 + value;
	}
	return result;
}


int hex2dec(char str[])
{
	const int n = 17;
	int degree=1;
	int result=0;
	char ch_hex[n] = "0123456789ABCDEF";
	for(int i=0; i<string_length(str); i++)
		for (int j = 0; j < n; j++)
		{
			if (str[string_length(str)-1-i] == ch_hex[j])
			{
				for (int x = 0; x < i; x++) degree *= 16;
				result = result + j * degree;
				degree = 1;
			}
			else 
				result;
		}
	return result;
}

void dec2bin(int d)
{
	int a;
	int i = 0;
	const int n = 100;
	char result[n]{};
	while (d > 1)
	{
		a = d % 2;
		d /= 2;
		(a == 0) ? result[i] = '0' : result[i] = '1';
		i++;
	}
	result[i] = '1';
	for (int j = 0; j < i+1; j++)
	{
		cout << result[string_length(result) -1 - j];
	}
	cout << endl;
}

void dec2hex(int h)
{
	int a;
	int i = 0;
	const int n2 = 100;
	char result[n2]{};
	const int n = 17;
	char ch_hex[n] = "0123456789ABCDEF";
	while (h > 16)
	{
		a = h % 16;
		h /= 16;
		result[i] = ch_hex[a];
		i++;
	}
	result[i] = ch_hex[h];
	for (int i = 0; i < string_length(result); i++)
	{
		cout << result[string_length(result) - 1 - i];
	}
	cout << endl;
}