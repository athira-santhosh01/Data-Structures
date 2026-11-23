#include<stdio.h>
int main()
{
  int arr[50],n,i,sum=0;
  printf("enter the limit ");
  scanf("%d",&n);
  printf("enter the elements ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
   }
     for(i=0;i<n;i++)
     {
      sum=sum+arr[i];
      }
      printf("sum is %d",sum);
    
   return 0;
}
