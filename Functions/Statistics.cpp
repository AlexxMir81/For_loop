#include"Statistics.h"


template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;

}
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>T minValuein(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;

}
template<typename T>T minValuein(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			(min > arr[i][j]) ? min = arr[i][j] : min;
		}
	}
	return min;
}

template<typename T>T maxValuein(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}
template<typename T>T maxValuein(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			(max < arr[i][j]) ? max = arr[i][j] : max;
		}
	}
	return max;
}
