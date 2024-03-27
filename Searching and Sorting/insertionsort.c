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
   int arry[]={2,4,3,65,74,6,4};
   int n = sizeof(arry)/sizeof(arry[1]);
   printarry(arry,n);

   for (int i = 0; i < n; i++)
   {
      int temp=arry[i];
      int j=i-1;

      while (j>=0 && arry[j]>temp)
      {
         arry[j+1]=arry[j];
         j--;
      }
      arry[j+1]=temp;
   }
   printarry(arry,n);
   return 0;
}