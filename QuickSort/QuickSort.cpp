#include "pch.h"
#include "QuickSort.h"
#include <iostream>

void QuickSort(int *arr, int n) {

	//элментарные условия выхода
	if (n <= 1) {
		return;
	}
	if (n == 2) {
		if (arr[0] <= arr[1]) {
			return;
		}
		else {
			int temp = arr[0];
			arr[0] = arr[1];
			arr[1] = temp;
			return;
		}
	}

	// разбиение массива на два массива
	int midPosition = (n / 2);
	int mid = arr[midPosition];

	int * arr1 = nullptr;
	int * arr2 = nullptr;

	int counter = 0;
	int counter2 = 0;

	for (int i = 0; i < n; i++) {
		if (arr[i] <= arr[midPosition] && i != midPosition) {
			counter++;
		}
	}

	arr1 = new int[counter];

	for (int i = 0; i < n; i++) {
		if (arr[i] <= arr[midPosition] && i != midPosition) {
			arr1[counter2] = arr[i];
			counter2++;
		}
	}

	QuickSort(arr1, counter);


	counter2 = 0;

	if (counter + 1 != n) {
		
		arr2 = new int[n - counter + 1];

		for (int i = 0; i < n; i++) {
			if (arr[i] > arr[midPosition]) {
				arr2[counter2] = arr[i];
				counter2++;
			}
		}
		QuickSort(arr2, counter2);
	}
	

	//Склейка массивов

	int i = 0;
	for (; i < counter; i++) {
		arr[i] = arr1[i];
	}
		
	arr[i++] = mid;
		
	if(arr2 != nullptr)
	for (int j = 0; i < n; i++) {
		arr[i] = arr2[j++];
	}
	

	delete[] arr1;
	delete[] arr2;
}


void Print(int *arr, int n) {
	printf_s("\n");

	for (int i = 0, count = 0; i < n; i++, count++) {
		if (count == 10) {
			printf_s("\n");
			count = 0;
		}

		printf_s("%d ", arr[i]);

	}
	printf_s("\n");
}
