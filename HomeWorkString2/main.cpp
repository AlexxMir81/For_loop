#include<iostream>
using namespace std;

int StrLen(char str[]);
void remove_symbol(char str[], char symbol);

bool is_hex(char str[]);
bool is_dec(char str[]);

bool is_mac_address(char str[]);
bool is_ip_address(char str[]);

void main()
{
	const int n = 18;
	char str[n];
	setlocale(LC_ALL, "Russian");
	cout << "Введите MAC - адрес: ";
	cin.getline(str, n);
	cout << (is_mac_address(str)==true?"Это MAC-адрес!": "Это не MAC-адрес!") << endl;
	cout << "Введите IP - адрес: ";
	cin.getline(str, n);
	cout << (is_ip_address(str)==true?"Это IP-адрес!":"Это не IP-адрес!") << endl;

}

int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
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

bool is_hex(char str[])
{
	for (int i = 0; str[i]; i++)
		if(not((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F')))
			return false;
		return true;

}bool is_dec(char str[])
{
	for (int i = 0; str[i]; i++)
		if(not(str[i] >= '0' && str[i] <= '9'))
			return false;
		return true;
}

bool is_mac_address(char str[])
{
	if ((str[2] == ':' && str[5] == ':' && str[8] == ':' && str[11] == ':' && str[14] == ':') ||
		(str[2] == '-' && str[5] == '-' && str[8] == '-' && str[11] == '-' && str[14] == '-') ||
		(str[4]=='.'&&str[9]=='.'))
	{
		//for (int i = 0; str[i]; i++)
		remove_symbol(str, ':');
		remove_symbol(str, '-');
		remove_symbol(str, '.');
		if (is_hex(str)) return true;
	}
	else return false;
}

bool is_ip_address(char str[])
{
	int ip_octet=0;
	if (str[0] != '.' && str[StrLen(str)] != '.')
		for (int x = 0; str[x]; x++)
			if (str[x] == '.')ip_octet += 1;
	if (ip_octet == 3)
	{
		int j = 0;
		for (int i = 0; str[i]; i++)
		{
			if (str[i] == '.' || i == StrLen(str)-1)
			{
				if (i == StrLen(str) - 1) i += 1;
				if (i - j == 3)
					if (((str[i - 3] - '0') * 100 + (str[i - 2] - '0') * 10 + (str[i - 1] - '0')) > 255)
						return false;
					else if (i - j == 2)
						if (((str[i - 2] - '0') * 10 + (str[i - 1] - '0')) > 99)
							return false;
						else if (i - j == 1)
							if ((str[i - 1] - '0') > 9)
								return false;
				j = i + 1;
			}
		}
		return true;
	}
	else return false;
}