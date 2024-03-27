#include<stdio.h>
void printarry(int arry[],int n){
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arry[i]);
    }
    printf("} \n");
}

int main()
{
   int arry[]= {2,4,5,3,6,4,8,6};
   int n = sizeof(arry)/sizeof(arry[1]);
   printarry(arry,n);


   for (int i = 0; i < n-1; i++)
   {
    int flag=0;
    for (int j= 0; j < n-1-i ; j++)
    {
        if (arry[j]>arry[j+1])
        {
            int temp = arry[j];
            arry[j]=arry[j+1];
            arry[j+1]=temp;
            flag=1;
        }
        
    }if (flag==0)
    {
        break;
    }
   }
   printarry(arry,n);
   return 0;
}