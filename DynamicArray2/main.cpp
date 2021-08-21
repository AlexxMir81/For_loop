#include<iostream>
using namespace std;

void Print(int arr[], const int n);
void FillRand(int arr[], const int n);

int* push_back(int arr[], int& n, int value); //добавлет значения в конец массива
int* push_front(int arr[], int& n, int value);

int* pop_back(int arr[], int& n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите колиество элементов массива:"; cin >> n;
	int* arr = new int[n] {};

	FillRand(arr, n);
	Print(arr, n);

	arr = push_back(arr, n, 1024);

	Print(arr, n);

	arr = push_front(arr, n, 2048);

	Print(arr, n);

	arr = pop_back(arr, n);
	Print(arr, n);

	delete[] arr;

}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int* push_back(int arr[], int& n, int value)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}

	delete[] arr;
	arr = buffer;

	arr[n] = value;

	//после добавления в конец масства количество его элеменов увеличивается на 1

	n++;
	return arr;
}

int* push_front(int arr[], int& n, int value)
{

	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}

	delete[] arr;
	arr = buffer;

	arr[0] = value;

	//после добавления в конец масства количество его элеменов увеличивается на 1

	n++;
	return arr;
}

int* pop_back(int arr[], int& n)
{
	int* buffer = new int[--n]{};
	for (int i = 0; i < n; i++)buffer[i] = arr[i];
	delete[] arr;
	return buffer;
}