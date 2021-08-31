#include"push.h"

template<typename T>T* push_back(T arr[], const int n, int back)
{
	T* arr2 = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
	arr2[n] = back;
	delete[] arr;
	return arr2;
}

template<typename T>T* push_front(T arr[], const int n, int front)
{
	T* arr2 = new T[n + 1];
	for (int i = 0; i < n; i++)
	{
		arr2[i + 1] = arr[i];
	}
	arr2[0] = front;
	delete[] arr;
	return arr2;
}

template<typename T>T* insert(T arr[], int n, const int index, int value)
{
	T* arr2 = new T[n + 1];
	if (n > index)
	{
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int j = index; j < n; j++)
		{
			arr2[j + 1] = arr[j];
		}
		arr2[index] = value;
	}
	else
	{
		cout << "Некорректное значение индекса!" << endl;
		delete[] arr2;
	}
	delete[] arr;
	return arr2;
}