#pragma once
#include"stdafx.h"

template<typename T>T Sum(T arr[], const int n);
template<typename T>T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>double Avg(T arr[], const int n);
template<typename T>double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T minValuein(T arr[], const int n);
template<typename T>T minValuein(T arr[ROWS][COLS], const int ROWS, const int COLS);

template<typename T>T maxValuein(T arr[], const int n);
template<typename T>T maxValuein(T arr[ROWS][COLS], const int ROWS, const int COLS);

