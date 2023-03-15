#include "sort.h"

void Swap (int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void InsertionSort (int *arr, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        size_t j = i;
        while (j >=  1 && arr [j] < arr [j - 1])
        {
            Swap (arr + j, arr + j - 1);
            j--;
        }
    }
}

void BubbleSort (int *arr, size_t size)
{
    for (size_t i = size; i > 0; i--)
    {
        for (size_t j = 0; j < i - 1; j++)
        {
            if (arr [j] > arr [j + 1]) Swap (arr + j, arr + j + 1);
        }
    }
}

void SelectionSort (int *arr, size_t size)
{
    for (size_t i = 1; i < size; i++)
    {
        size_t min = i;

        for (size_t j = i + 1; j < size; j++)
        {
            if (arr [j] < arr [min]) min = j;
        }
        Swap (arr + min, arr + i);
    }
}

