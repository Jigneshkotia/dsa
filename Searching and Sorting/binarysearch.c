#include<stdio.h>

int binarysearch(int a[],int n,int num){
   int l=0;
   int r=n-1;

while (l<=r)
{
 
   int mid=(l+r)/2;
   if (a[mid] == num)
   {
      return mid;
   }else if (a[mid]<num)
   {
      l=mid+1;
   }else{
      r=mid-1;
   }
}
return -1;  

}
int main()
{
   int n;
   int arry[]={1,2,5,6,8,56,432};
   int lenght=sizeof(arry)/sizeof(arry[1]);
   printf("enter the number you want to find :");
   scanf("%d",&n);

   int temp=binarysearch(arry,lenght,n);
   if (temp == -1)
   {
      printf("the num is not in array !!");
   }else{
      printf("the number is at index: %d", temp);
   }
   

   return 0;
}