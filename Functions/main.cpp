#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"

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
