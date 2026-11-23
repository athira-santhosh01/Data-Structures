#include<stdio.h>
int main()
{
  int arr[50],n,i;
  printf("enter the limit ");
  scanf("%d",&n);
  printf("enter the numbers ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
   }
  printf("Even numbers are :");
  for(i=0;i<n;i++)
  {
   if(arr[i]%2==0)
   {
    printf("%d\n",arr[i]);
    }
   }
   printf("odd numbers are :");
   for(i=0;i<n;i++)
   {
    if(arr[i]%2!=0)
    {
    printf("%d\n",arr[i]);
    }
    }
    }
    
   
