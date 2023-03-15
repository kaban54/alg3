#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdint.h>
#include <inttypes.h>


void Swap (int *p1, int *p2);

void InsertionSort (int *arr, size_t size);

void BubbleSort (int *arr, size_t size);

void SelectionSort (int *arr, size_t size);

void Shuffle (int *arr, size_t size);

void Quicksort (int *data, int l, int r, int (*partition)(int*, int, int));

int Partition1 (int *data, int l, int r);
int Partition2 (int *data, int l, int r);
int Partition3 (int *data, int l, int r);

void MergeSort (int *arr, size_t size);