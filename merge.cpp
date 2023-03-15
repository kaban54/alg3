#include "sort.h"

void Swap (int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void MergeSort (int *arr, size_t size)
{
    if (size == 1) return;

    size_t mid = size / 2;
    MergeSort (arr, mid);
    MergeSort (arr + mid, size - mid);

    size_t i1 = 0;
    size_t i2 = 0;
    
    int *buf = (int *) calloc (size, sizeof (int));
    if (buf == NULL) return;

    while (i1 < mid && i2 < size - mid)
    {
        if (arr [i1] <= arr [mid + i2])
        {
            buf [i2 + i1] = arr [i1];
            i1++;
        }
        else
        {
            buf [i1 + i2] = arr [mid + i2];
            i2++;
        }
    }

    while (i1 < mid)
    {
        buf [i2 + i1] = arr [i1];
        i1++;
    }

    while (i2 < size - mid)
    {
        buf [i1 + i2] = arr [mid + i2];
        i2++;
    }

    for (i1 = 0; i1 < size; i1++) arr [i1] = buf [i1];

    free (buf);
}


