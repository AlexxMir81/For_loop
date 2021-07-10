#include<iostream>
using namespace std;

#define tab "\t"

int g_a; //глобальная переменная, ее видят все функции, ее может изменить любая функция
const int ROWS = 5;
const int COLS = 8;

template<typename T>void FillRand(T arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void Print(T arr[], const int n);

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>void PrintReverse(T arr[], const int n);

template<typename T>T Sum(T arr[], const int n);

template<typename T>T Avg(T arr[], const int n);

template<typename T>T minValuein(T arr[], const int n);

template<typename T>T maxValuein(T arr[], const int n);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "int array" << endl;
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(arr, n) << endl << endl;

	double d_arr[n]; //double array
	FillRand(d_arr, n);
	cout << "double array" << endl;
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(d_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(d_arr, n) << endl << endl;
	
	float f_arr[n]; //float array
	FillRand(f_arr, n);
	cout << "float array" << endl;
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(f_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(f_arr, n) << endl << endl;

	char ch_arr[n]; //char array
	FillRand(ch_arr, n);
	cout << "char array" << endl;
	Print(ch_arr, n);
	PrintReverse(ch_arr, n);
	cout << "Сумма элементов массива: " << Sum(ch_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(ch_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(ch_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(ch_arr, n) << endl << endl;

	short sh_arr[n]; //short array
	FillRand(sh_arr, n);
	cout << "short array" << endl;
	Print(sh_arr, n);
	PrintReverse(sh_arr, n);
	cout << "Сумма элементов массива: " << Sum(sh_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(sh_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(sh_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(sh_arr, n) << endl << endl;

	cout << "=====================2D ARRAYS===============================" << endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

template<typename T>void FillRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = rand() % 100;
}

void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = double(rand() % 100) / 10;
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = float(rand() % 100) / 10;
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = char(rand());
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
		arr[i] = short(rand() % 100);
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
	}
}

template<typename T>void PrintReverse(T arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}


template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}
template<typename T>T Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>T minValuein(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;

}

template<typename T>T maxValuein(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}
