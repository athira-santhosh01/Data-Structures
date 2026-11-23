#include<stdio.h>
int main()
{
 int arr[50],n,key,i,found=0;
 printf("Enter the limit:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 printf("Enter the element to search:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if(arr[i]==key)
  {
   printf("Element found at %d",i+1);
   found=1;
  }
 }
 if(found==0)
 {
  printf("Element not found");
 }
}
