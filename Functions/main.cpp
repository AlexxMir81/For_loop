#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	cout << "int array" << endl;
	Sort(arr, n);
	Print(arr, n);
	PrintReverse(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(arr, n) << endl << endl;

	double d_arr[n]; //double array
	FillRand(d_arr, n);
	cout << "double array" << endl;
	Sort(d_arr, n);
	Print(d_arr, n);
	PrintReverse(d_arr, n);
	cout << "Сумма элементов массива: " << Sum(d_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(d_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(d_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(d_arr, n) << endl << endl;
	
	float f_arr[n]; //float array
	FillRand(f_arr, n);
	cout << "float array" << endl;
	Sort(f_arr, n);
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(f_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(f_arr, n) << endl << endl;

	char ch_arr[n]; //char array
	FillRand(ch_arr, n);
	cout << "char array" << endl;
	Sort(ch_arr, n);
	Print(ch_arr, n);
	PrintReverse(ch_arr, n);
	cout << "Сумма элементов массива: " << Sum(ch_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(ch_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(ch_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(ch_arr, n) << endl << endl;

	short sh_arr[n]; //short array
	FillRand(sh_arr, n);
	cout << "short array" << endl;
	Sort(sh_arr, n);
	Print(sh_arr, n);
	PrintReverse(sh_arr, n);
	cout << "Сумма элементов массива: " << Sum(sh_arr, n) << endl;
	cout << "Среднее арифметическое: " << Avg(sh_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(sh_arr, n) << endl;
	cout << "Максимальное значение из массива: " << maxValuein(sh_arr, n) << endl << endl;

	cout << "=====================2D ARRAYS===============================" << endl;

	int i_arr_2[ROWS][COLS];
	double d_arr_2[ROWS][COLS];
	float f_arr_2[ROWS][COLS];
	char c_arr_2[ROWS][COLS];
	short s_arr_2[ROWS][COLS];

	FillRand(i_arr_2, ROWS, COLS);
	FillRand(d_arr_2, ROWS, COLS);
	FillRand(f_arr_2, ROWS, COLS);
	FillRand(c_arr_2, ROWS, COLS);
	FillRand(s_arr_2, ROWS, COLS);

	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из двумерного массива: " << minValuein(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из двумерного массива: " << maxValuein(i_arr_2, ROWS, COLS) << endl << endl;

	Sort(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из двумерного массива: " << minValuein(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из двумерного массива: " << maxValuein(d_arr_2, ROWS, COLS) << endl << endl;

	Sort(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из двумерного массива: " << minValuein(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из двумерного массива: " << maxValuein(f_arr_2, ROWS, COLS) << endl << endl;
	
	Sort(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(c_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(c_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из двумерного массива: " << minValuein(c_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из двумерного массива: " << maxValuein(c_arr_2, ROWS, COLS) << endl << endl;
	
	Sort(s_arr_2, ROWS, COLS);
	Print(s_arr_2, ROWS, COLS);
	cout << "Сумма элементов двумерного массива: " << Sum(s_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое двумерного массива: " << Avg(s_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение из двумерного массива: " << minValuein(s_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение из двумерного массива: " << maxValuein(s_arr_2, ROWS, COLS) << endl << endl;

}
