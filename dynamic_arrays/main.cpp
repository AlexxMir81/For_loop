#include<iostream>
using namespace std;

template<typename T>void Print(T arr[], const int n);
void FillRand(int arr[], const int n);
template<typename T>T* push_back(T arr[], const int n, int back);
template<typename T>T* push_front(T arr[], const int n, int front);
template<typename T>T* insert(T arr[],const int n, int index, int value);
template<typename T>T* pop_back(T arr[], const int n);
template<typename T>T* pop_front(T arr[], const int n);
template<typename T>T* erase(T arr[], const int n, int index);


void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите колиество элементов массива:"; cin >> n;
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

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>T* push_back(T arr[],const int n, int back)
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

template<typename T>T* push_front(T arr[],const int n, int front)
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

template<typename T>T* insert(T arr[], int n, const int index, int value)
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
		cout << "Некорректное значение индекса!" << endl;
	}
	delete[] arr;
	return arr2;
}

template<typename T>T* pop_back(T arr[], const int n)
{
	int* arr2 = new int[n - 1];
	for (int i = 0; i < n-1; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}

template<typename T>T* pop_front(T arr[], const int n)
{
	int* arr2 = new int[n-1];
	for (int i = 1; i < n; i++)
	{
		arr2[i-1] = arr[i];
	}
	delete[] arr;
	return arr2;
}

template<typename T>T* erase(T arr[], const int n, int index)
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
		cout << "Некорректное значение индекса!" << endl;
	}
	delete[] arr;
	return arr2;
}