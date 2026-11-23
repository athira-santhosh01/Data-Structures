#include<stdio.h>
int main()
{
  int array[100],i,j,n,temp;
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the elements of the array");
  for(i=0;i<n;i++)
  { 
    scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
      for(j=0;j<(n-i-1);j++)
      {
        if(array[j]>array[j+1])
        {
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        }
      }
    }
    printf("\nSorted array: ");
    for(i=0;i<n;i++)
    {
      printf("%d",array[i]);
    }
  }
