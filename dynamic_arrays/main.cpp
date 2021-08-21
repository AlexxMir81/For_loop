#include<iostream>
using namespace std;

void Print(int arr[], const int n);
void FillRand(int arr[], const int n);
int* push_back(int arr[], const int n, int back);
int* push_front(int arr[], const int n, int front);
int* insert(int arr[],const int n, int index, int value);
int* pop_back(int arr[], const int n);
int* pop_front(int arr[], const int n);
int* erase(int arr[], const int n, int index);


void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ��������� ��������� �������:"; cin >> n;
	int* arr = new int[n] {};

	FillRand(arr, n);
	Print(arr, n);

	arr = push_back(arr, n, 55555);
	n++;
	Print(arr, n);
	
	arr = push_front(arr, n, 2222);
	n++;
	Print(arr, n);

	arr = insert(arr, n, 3, 444);
	n++;
	Print(arr, n);
	
	arr = pop_back(arr, n);
	n--;
	Print(arr, n);

	arr = pop_front(arr, n);
	n--;
	Print(arr, n);

	arr = erase(arr, n, 2);
	n--;
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

int* push_back(int arr[],const int n, int back)
{
	int* arr2 = new int[n+1];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = back;
	delete[] arr;
	return arr2;
}

int* push_front(int arr[],const int n, int front)
{
	int* arr2 = new int[n+1];
	for (int i=0; i < n; i++)
	{
		arr2[i + 1] = arr[i];
	}
	arr2[0] = front;
	delete[] arr;
	return arr2;
}

int* insert(int arr[], int n, const int index, int value)
{
	int* arr2 = new int[n + 1];
	if (n > index)
	{
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int j = index; j < n; j++)
		{
			arr2[j+1] = arr[j];
		}
		arr2[index] = value;
	}
	else
	{
		cout << "������������ �������� �������!" << endl;
	}
	delete[] arr;
	return arr2;
}

int* pop_back(int arr[], const int n)
{
	int* arr2 = new int[n - 1];
	for (int i = 0; i < n-1; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}

int* pop_front(int arr[], const int n)
{
	int* arr2 = new int[n-1];
	for (int i = 1; i < n; i++)
	{
		arr2[i-1] = arr[i];
	}
	delete[] arr;
	return arr2;
}

int* erase(int arr[], const int n, int index)
{
	int* arr2 = new int[n-1];
	if (n > index)
	{
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int j = index; j < n; j++)
		{
			arr2[j-1] = arr[j];
		}
	}
	else 
	{
		cout << "������������ �������� �������!" << endl;
	}
	delete[] arr;
	return arr2;
}