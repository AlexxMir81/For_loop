#include<iostream>
using namespace std;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "Russian");
	for(int i = 1; i <= 10; i++) 
	{
		cout << endl;
		for (int j = 1; j <= 10; j++)
		{
			cout << i*j << tab;
			//cout << i << "*" << j << "=" << i*j << endl;
		}
	}
		
}