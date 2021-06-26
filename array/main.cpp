#include<iostream>
using namespace std;

#define tab "\t"

void Print(int arr[], const int n);
void Input(int arr[], const int n);
void PrintReverse(int arr[], const int n);
int Sum(int arr[], const int n);
double Avg(int arr[], const int n);
int minValuein(int arr[], const int n);
int maValuein(int arr[], const int n);
int maxValuein(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	cout << "Введите значения " << n << " элементов массива: " << endl;
	Input(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Общая сумма всех элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(arr, n) << endl;
	cout << "максимальное значение из массива: " << maxValuein(arr, n) << endl;
}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void Input(int arr[], const int n)
{
	int value;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		arr[i] = value;
	}
	cout << endl;
}
void PrintReverse(int arr[], const int n)
{
	for (int i = n-1; i >= 0; i--)
		{
			cout << arr[i] << tab;
		}
	cout << endl;
}
int Sum(int arr[], const int n)
{
	int total_sum = 0;
	for (int i = 0; i < n; i++)
	{
		total_sum += arr[i];
	}
	return total_sum;
}

double Avg(int arr[], const int n)
{
	double total_sum = 0;
	/*можно реализовать через функцию Sum, 
	но тогда нужно изменить тип возвращаемых данных на double в функции Sum,
	в таком случае код будет: return Sum(arr, n)/n   */
	for (int i = 0; i < n; i++)
	{
		total_sum += (double)arr[i]/n;
	}
	return total_sum;
}

int minValuein(int arr[], const int n)
{
	int result = arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		(result < arr[i] ? result : result = arr[i]);
	}
	return result;
}

int maxValuein(int arr[], const int n)
{
	int result = arr[n - 1];
	for (int i = 0; i < n; i++)
	{
		(result > arr[i] ? result : result = arr[i]);
	}
	return result;
}