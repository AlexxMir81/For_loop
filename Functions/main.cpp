﻿#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int minValuein(int arr[], const int n);
double minValuein(double arr[], const int n);
int maxValuein(int arr[], const int n);
double maxValuein(double arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	//	cout << "Введите значения " << n << " элементов массива: " << endl;
	FillRand(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма эл-в массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифм.: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(arr, n) << endl;
	cout << "максимальное значение из массива: " << maxValuein(arr, n) << endl;

	double d_arr[n]; //double array
	FillRand(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма эл-в массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифм.: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(d_arr, n) << endl;
	cout << "Минимальное значение из массива: " << maxValuein(d_arr, n) << endl;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = double(rand() % 100) / 10;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void PrintReverse(int arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(double arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int minValuein(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;

}
double minValuein(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}

int maxValuein(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}
double maxValuein(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}