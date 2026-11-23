#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node*link;
};
struct node*top=NULL;
void push()
{
 struct node*newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 if(newnode==NULL)
 {
  printf("\nNo space available\n");
  return;
  }
  newnode->link=NULL;
  printf("\nEnter the element to insert:");
  scanf("%d",&newnode->data);
  if(top==NULL)
  {
   top=newnode;
  }
  else{
  newnode->link=top;
  top=newnode;
}
printf("\n%d Inserted successfully",newnode->data);
}
void pop()
{
 struct node*temp=top;
 if(top==NULL)
 {
  printf("\nStack underflow");
  return;
  }
  printf("\n%d is popped",temp->data);
  top=temp->link;
  free(temp);
  }
void peek()
  {
   struct node*temp=top;
   if(top==NULL)
   {
    printf("\nStack underflow");
    return;
    }
    printf("Top element is %d",temp->data);
   }
 void display()
 {
  struct node*temp=top;
  if(top==NULL)
  {
   printf("\nStack is empty");
   return;
   }
  printf("\nElements in stack are:\n");
  while(temp!=NULL)
  {
   printf("%d",temp->data);
   temp=temp->link;
   }
   }
 void search()
 {
  struct node*temp=top;
  int key,found=0;
  if(top==NULL)
{
 printf("Stack underflow");
 return;
 }
 printf("Enter the element to search:");
 scanf("%d",&key);
 while(temp!=NULL){
  if(temp->data==key)
  {
   printf("%d element found",temp->data);
   found=1;
   }
   temp=temp->link;
   }
    if(!found)
    {
    printf("element not found");
    }
    }
void main()
{
 int choice;
 do{
  printf("\n----STACK OPERATIONS-----\n");
  printf("\n1->push()\n 2->pop()\n 3->peek()\n 4->display()\n 5->search()\n 6->exit\n");
  printf("\n Enter the choice:");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:push();break;
   case 2:pop();break;
   case 3:peek();break;
   case 4:display();break;
   case 5:search();break;
   case 6:printf("\n Exit\n");
   break;
   default:printf("Enter a valid choice:");
   }
   }while(choice!=6);
   }
  
  
