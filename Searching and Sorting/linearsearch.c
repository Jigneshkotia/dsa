#include<stdio.h>
int main()
{
   int numbers[]={1,12,43,23,5,6,43};
   int n=sizeof(numbers)/sizeof(numbers[1]);
   int data;
   
   printf("enter the number you want to found via linear search :");
   scanf("%d",&data);

   int found = 0;
   for (int i = 0; i < n; i++)
   {
    if (numbers[i]==data)
    {
        printf("The item is at postion %d",i+1);
        found = 1;
        break;
    }
   }

   if (found==0)
   {
    printf("!!the number is not in the array!!");
   }
   
   
   return 0;
}