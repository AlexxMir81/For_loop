#include<iostream>
using namespace std;

#define tab "\t"

void FillRand(int arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(char arr[], const int n);
void FillRand(short arr[], const int n);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void Print(float arr[], const int n);
void Print(char arr[], const int n);
void Print(short arr[], const int n);
void PrintReverse(int arr[], const int n);
void PrintReverse(double arr[], const int n);
void PrintReverse(float arr[], const int n);
void PrintReverse(char arr[], const int n);
void PrintReverse(short arr[], const int n);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
float Sum(float arr[], const int n);
char Sum(char arr[], const int n);
short Sum(short arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
float Avg(float arr[], const int n);
char Avg(char arr[], const int n);
short Avg(short arr[], const int n);
int minValuein(int arr[], const int n);
double minValuein(double arr[], const int n);
float minValuein(float arr[], const int n);
char minValuein(char arr[], const int n);
short minValuein(short arr[], const int n);
int maxValuein(int arr[], const int n);
double maxValuein(double arr[], const int n);
float maxValuein(float arr[], const int n);
char maxValuein(char arr[], const int n);
short maxValuein(short arr[], const int n);

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
	cout << "Минимальное значение из массива: " << maxValuein(d_arr, n) << endl << endl;
	
	float f_arr[n]; //float array
	FillRand(f_arr, n);
	cout << "float array" << endl;
	Print(f_arr, n);
	PrintReverse(f_arr, n);
	cout << "Сумма элементов массива: " << Sum(f_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(f_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(f_arr, n) << endl;
	cout << "Минимальное значение из массива: " << maxValuein(f_arr, n) << endl << endl;

	char ch_arr[n]; //char array
	FillRand(ch_arr, n);
	cout << "char array" << endl;
	Print(ch_arr, n);
	PrintReverse(ch_arr, n);
	cout << "Сумма элементов массива: " << Sum(ch_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(ch_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(ch_arr, n) << endl;
	cout << "Минимальное значение из массива: " << maxValuein(ch_arr, n) << endl << endl;

	short sh_arr[n]; //short array
	FillRand(sh_arr, n);
	cout << "short array" << endl;
	Print(sh_arr, n);
	PrintReverse(sh_arr, n);
	cout << "Сумма элементов массива: " << Sum(sh_arr, n) << endl;
	cout << "Среднее Среднее арифметическое: " << Avg(sh_arr, n) << endl;
	cout << "Минимальное значение из массива: " << minValuein(sh_arr, n) << endl;
	cout << "Минимальное значение из массива: " << maxValuein(sh_arr, n) << endl << endl;
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
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(short arr[], const int n)
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
void PrintReverse(float arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(char arr[], const int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void PrintReverse(short arr[], const int n)
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
float Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
short Sum(short arr[], const int n)
{
	short sum = 0;
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
float Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
char Avg(char arr[], const int n)
{
	return (char)Sum(arr, n) / n;
}
short Avg(short arr[], const int n)
{
	return (short)Sum(arr, n) / n;
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
float minValuein(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}
char minValuein(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min) min = arr[i];
	return min;
}
short minValuein(short arr[], const int n)
{
	short min = arr[0];
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
float maxValuein(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}
char maxValuein(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}
short maxValuein(short arr[], const int n)
{
	short max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max) max = arr[i];
	return max;
}