#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
int isfull()
{
 if((rear+1)%max==front)
 {
  return 1;
 }
 return 0;
}
int isempty()
{
  if(front==-1&&rear==-1)
{
  return 1;
}
  return 0;
}
void display()
{
  int i;
  if(isempty())
  {
    printf("Queue is Empty\n");
    return;
  }
  printf("\nQueue element:");
  i=front;
  do
  {
    printf("%d",queue[i]);
    i=(i+1)%max;
    }while(i!=(rear+1)%max);
}
void dequeue()
{
if(isempty())
{
  printf("\nQueue is empty\n");
  return;
}
printf("%d is deleted\n",queue[front]);
if(front==rear)
{
 front=rear=-1;
}
else
{
  front=(front+1)%max;
}
}
void enqueue()
{
int x;
if(isfull())
{
  printf("\nQueue is full\n");
  return;
}
printf("enter the element to insert");
scanf("%d",&x);
if(isempty())
{
 front=rear=0;
}
else
{
 rear=(rear+1)%max;
}
queue[rear]=x;
printf("\n Element %d inserted successfully\n",queue[rear]);
}
void search()
{
int key,i,found=0;
if(isempty())
{
  printf("\n Queue is Empty\n");
  return;
}
printf("\nEntry the elements to search");
scanf("%d",&key);
i=front;
do
{
  if(queue[i]==key)
  {
    printf("\nElement %d found at position %d\n",key,i);
    found=1;
    break;
  }
  i=(i+1)%max;
}while(i!=(rear+1)%max);
if(!found)
{
  printf("\nelement %d not found in the queue\n",key);
}
}
int main()
{
int choice;
printf("\ncircular queue using array\n");
  do
  {
  printf("-----QUEUE OPERATION-----\n");
  printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.search\n 5.exit\n\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:enqueue();
           break;
     case 2:dequeue();
            break;
     case 3:display();
            break;
     case 4:search();
             break;
     case 5:printf("program ended\n");
            break;
     default:printf("invalid choice");
          
  }
  }while(choice!=5);
  return 0;
}
