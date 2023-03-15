#include "sort.h"

const int num_of_tests = 5;


void Shuffle (int *arr, size_t size)
{
    for (size_t i = 0; i < size; i++) arr [i] = rand ();
}

int main (void)
{
    int *arr = nullptr;

    double time1 = 0;
    double time2 = 0;
    double avg_time = 0;

    FILE *file = nullptr;
/*
    file = fopen ("output/median.txt", "w");

    for (size_t size = 100000; size <= 5000000; size += 100000)
    {
        arr = (int *) calloc (size, sizeof (arr[0]));
        avg_time = 0;

        for (int n = 0; n < num_of_tests; n++)
        {
            Shuffle (arr, size);
            time1 = (double) clock () / CLOCKS_PER_SEC;
            Quicksort (arr, 0, size - 1, Partition1);
            time2 = (double) clock () / CLOCKS_PER_SEC;
            avg_time += time2 - time1;
            printf ("Median %lld; test #%d OK.\n", size, n + 1);
        }
        fprintf (file, "%lld %lf\n", size, avg_time / num_of_tests);
        fflush (file);

        free (arr);
    }
    fclose (file);


    file = fopen ("output/center.txt", "w");

    for (size_t size = 100000; size <= 5000000; size += 100000)
    {
        arr = (int *) calloc (size, sizeof (arr[0]));
        avg_time = 0;

        for (int n = 0; n < num_of_tests; n++)
        {
            Shuffle (arr, size);
            time1 = (double) clock () / CLOCKS_PER_SEC;
            Quicksort (arr, 0, size - 1, Partition1);
            time2 = (double) clock () / CLOCKS_PER_SEC;
            avg_time += time2 - time1;
            printf ("center %lld; test #%d OK.\n", size, n + 1);
        }
        fprintf (file, "%lld %lf\n", size, avg_time / num_of_tests);
        fflush (file);

        free (arr);
    }
    fclose (file);
*/

    file = fopen ("output/random.txt", "w");

    for (size_t size = 100000; size <= 5000000; size += 100000)
    {
        arr = (int *) calloc (size, sizeof (arr[0]));
        avg_time = 0;

        for (int n = 0; n < num_of_tests; n++)
        {
            Shuffle (arr, size);
            time1 = (double) clock () / CLOCKS_PER_SEC;
            Quicksort (arr, 0, size - 1, Partition1);
            time2 = (double) clock () / CLOCKS_PER_SEC;
            avg_time += time2 - time1;
            printf ("random %lld; test #%d OK.\n", size, n + 1);
        }
        fprintf (file, "%lld %lf\n", size, avg_time / num_of_tests);
        fflush (file);

        free (arr);
    }
    fclose (file);

    return 0;
}