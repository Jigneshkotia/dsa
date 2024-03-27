#include<stdio.h>
int b[10]={};

void printarry(int arry[],int n){
    printf("{");
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arry[i]);
    }
    printf("} \n");
}

void merge(int array[],int lb,int mid,int ub){
    int i =lb;
    int j=mid+1;
    int k=lb;

  while (i<=mid && j<=ub)
  {
    if(array[i]<=array[j])
    {
        b[k]=array[i];
        i++;
    }
    else{
        b[k]=array[j];
        j++;
    }
    k++;
  }
  if (i>mid)
  {
    while (j<=ub)
    {
        b[k]=array[j];
        j++;
        k++;
    }
  }else{
    while (i<=mid)
    {
        b[k]=array[i];
        i++;
        k++;
    }
  }
}

void mergesort(int arry[],int lb,int ub){
    if (lb<ub)
    {
        int mid=(lb+ub)/2;
        mergesort(arry,lb,mid);
        mergesort(arry,mid+1,ub);
        merge(arry,lb,mid,ub);
    }  
}

int main()
{
   int array[]={2,3,12,2,4,23,54,33,333,};
   int n= sizeof(array)/sizeof(array[1]);
   printarry(array,n);

   mergesort(array,0,n-1);

   printarry(b,n);
   return 0;
}