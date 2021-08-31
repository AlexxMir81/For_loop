#include"pop.h"

template<typename T>T* pop_back(T arr[], const int n)
{
	T* arr2 = new T[n - 1];
	for (int i = 0; i < n - 1; i++)
	{
		arr2[i] = arr[i];
	}
	delete[] arr;
	return arr2;
}

template<typename T>T* pop_front(T arr[], const int n)
{
	T* arr2 = new T[n - 1];
	for (int i = 1; i < n; i++)
	{
		arr2[i - 1] = arr[i];
	}
	delete[] arr;
	return arr2;
}

template<typename T>T* erase(T arr[], const int n, int index)
{
	T* arr2 = new T[n - 1];
	if (n > index)
	{
		for (int i = 0; i < index; i++)
		{
			arr2[i] = arr[i];
		}
		for (int j = index; j < n; j++)
		{
			arr2[j - 1] = arr[j];
		}
	}
	else
	{
		cout << "Некорректное значение индекса!" << endl;
		delete[] arr2;
	}
	delete[] arr;
	return arr2;
}