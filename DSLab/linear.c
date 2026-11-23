#include<stdio.h>
int main()
{
  int arr[50],n,i,key,found=0;
  printf("enter the limit ");
  scanf("%d",&n);
  printf("enter the elements ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
   }
  printf("Enter the elements to be searched :");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(arr[i]==key)
    {
     printf("element found at position %d",i+1);
     found=1;
     }
    }
    if(found==0)
     { 
      printf("element not found");
     }
     }
