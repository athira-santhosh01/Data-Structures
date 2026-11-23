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
  printf("\n no space available\n");
  return;
  }
  newnode->link=NULL;
  printf("\neneter the element to insert");
  scanf("%d",&newnode->data);
  if(top==NULL)
  {
   top=newnode;
  }
  else{
  newnode->link=top;
  top=newnode;
}
printf("\n%d inserted successfully",newnode->data);
}
void pop()
{
 struct node*temp=top;
 if(top==NULL)
 {
  printf("\nstack underflow");
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
    printf("\nstack underflow");
    return;
    }
    printf("top element is %d",temp->data);
   }
 void display()
 {
  struct node*temp=top;
  if(top==NULL)
  {
   printf("\nno element");
   return;
   }
  printf("\nelements in stack are:\n");
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
 printf("stack underflow");
 return;
 }
 printf("enter the element to serch");
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
  printf("\n----stack-----");
  printf("\n1->push()\n 2->pop()\n 3->peek()\n 4->display()\n 5->search()\n 6->exit");
  printf("\n eneter the choice");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:push();break;
   case 2:pop();break;
   case 3:peek();break;
   case 4:display();break;
   case 5:search();break;
   case 6:printf("\n Exit");
   break;
   default:printf("enter a valid choice:");
   }
   }while(choice!=6);
   }
  
  
