// QuickSort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <stdlib.h>
#include <iostream>
#include "QuickSort.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "Rus");
	srand(100);
	int n = 100;

	int *arr = new int[n];

	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 10;
	}

	printf_s("\nИсходный массив: \n");

	Print(arr, n);

	printf_s("\nОтсортированный массив: \n");
	QuickSort(arr, n);
	Print(arr, n);

	system("pause");

	return 0;
	
}




