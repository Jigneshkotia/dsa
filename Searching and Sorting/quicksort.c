#include <stdio.h>

void printarry(int arry[], int n)
{
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,", arry[i]);
    }
    printf("} \n");
}

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int array[], int lb, int ub)
{
    int pivot = array[lb];
    int start = lb;
    int end = ub;

    while (start < end)
    {
        while (array[start] <= pivot)
        {
            start++;
        }
        while (array[end] > pivot)
        {
            end--;
        }
        if (start < end)
        {
            swap(array, start, end);
        }
    }
    swap(array, lb, end);
    return end;
}

void quicksort(int array[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partition(array, lb, ub);
        quicksort(array, lb, loc - 1);
        quicksort(array, loc + 1, ub);
    }
}

int main()
{
    int a[] = {1, 2, 2, 5, 7, 4, 2, 4, 7, 4, 32, 2};
    int n = sizeof(a) / sizeof(a[1]);
    printarry(a, n);

    quicksort(a, 0, n - 1);

    printarry(a, n);
    return 0;
}