#include<stdio.h>
#define max 5
int queue[max];
int front=-1,rear=-1;
void enqueue(int item)
{
 if(rear==max-1)
 {
   printf("queue overflow");
 }
 else
 {
   if(front==-1)
   front=0;
   rear++;
   queue[rear]=item;
   printf("inserted into queue %d",item);
 }
 }
void dequeue()
{
  if(front==-1||front>rear)
  {
    printf("queue underflow\n");
  }
  else
  {
    printf("deleted item is %d\n",queue[front]);
    if(front==rear)
    {
     front=rear=-1;
    }
    else
    {
      front++;
    }
  }
}
void display()
{
  if(front==-1)
  {
    printf("queue is empty\n");
  }
  else
  {
    printf("queue item are:");
    for(int i=front;i<=rear;i++)
    {
    printf("%d",queue[i]);
    } 
    printf("\n");
}
}
void peek()
{
  if(front==-1)
  {
    printf("queue is empty\n");
    return;
  }
  else
  {
    printf("front elementis %d\n:",queue[front]);
   }
   }
  int main()
  {
  int choice,item;
  do
  {
  printf("-----QUEUE OPERATION-----\n");
  printf("1.Enqueue\n 2.Dequeue\n 3.Display\n 4.Peek\n 5.exit\n\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:printf("enter the element ");
           scanf("%d",&item);
           enqueue(item);
           break;
     case 2:dequeue();
            break;
     case 3:display();
            break;
     case 4:peek();
             break;
     case 5:printf("program ended\n");
            break;
     default:printf("invalid choice");
          
  }
  }while(choice!=5);
  return 0;
  }
