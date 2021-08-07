#include"Sort.h"


template<typename T>void Sort(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[j] < min)
			{
				arr[i] = arr[j];
				arr[j] = min;
				min = arr[i];
			}
		}
		min = arr[i + 1];
	}
}
template<typename T>void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int x = 0; x < ROWS; x++)
	{
		for (int i = 0; i < COLS; i++)
		{
			for (int j = i; j < COLS; j++)
			{
				if (arr[x][j] < min)
				{
					arr[x][i] = arr[x][j];
					arr[x][j] = min;
					min = arr[x][i];
				}
			}
			min = arr[x][i + 1];
		}
	}
}