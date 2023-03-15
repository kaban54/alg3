#include "sort.h"

void Swap (int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

void Quicksort (int *data, int l, int r, int (*partition)(int*, int, int))
{
    if (l >= r) return;

    int mid = partition (data, l, r);

    Quicksort (data, l, mid, partition);
    Quicksort (data, mid + 1, r, partition);
}


int Partition1 (int *data, int l, int r)
{
    int val = data [(r + l) / 2];
    if (val >= data [l])
    {
        if (data [l] >= data [r]) val = data [l];
        else if (data [r] < val)  val = data [r];
    }
    else
    {
        if (data [l] <= data [r]) val = data [l];
        else if (data [r] > val)  val = data [r];
    }

    while (l <= r)
    {
        while (data [l] < val) l++;
        while (data [r] > val) r--;
        if (l >= r) break;

        Swap (data + l, data + r);
        l++;
        r--;
    }
    return r;
}


int Partition2 (int *data, int l, int r)
{
    int val = data [(r + l) / 2];

    while (l <= r)
    {
        while (data [l] < val) l++;
        while (data [r] > val) r--;
        if (l >= r) break;

        Swap (data + l, data + r);
        l++;
        r--;
    }
    return r;
}


int Partition3 (int *data, int l, int r)
{
    int val = data [l + rand() % (r - l + 1)];

    while (l <= r)
    {
        while (data [l] < val) l++;
        while (data [r] > val) r--;
        if (l >= r) break;

        Swap (data + l, data + r);
        l++;
        r--;
    }
    return r;
}