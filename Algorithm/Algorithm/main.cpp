#include<iostream>

#include "PriorityQueue.h"
#include "QuickSort.h"

using namespace std;

int main(int argc, char** argv)
{
	//int arr[] = { 27, 17, 3, 16, 13, 10, 1, 5, 7, 12, 4, 8, 9, 0 };
	int arr[] = { 15, 13, 9, 5, 12, 8, 7, 4, 0, 6, 2, 1 };
	int nLength = 12;

	CQuickSort<int> quickSort(arr, nLength);
	quickSort.Print();

	system("pause");
}