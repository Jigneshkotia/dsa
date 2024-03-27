#include <stdio.h>

void printarry(int arry[],int n){
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arry[i]);
    }
    printf("} \n");
}

void swap(int a[],int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main()
{
    int arry[] = {2, 2, 3, 5, 4, 23, 45, 3, 678, 5544};
    int n = sizeof(arry) / sizeof(arry[1]);

    printarry(arry, n);

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i+1; j < n; j++)
        {
            if (arry[j] < arry[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arry,i,min);
        }
    }
    printarry(arry, n);
    return 0;
}