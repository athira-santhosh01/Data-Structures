#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node*link;
};
struct node*head=null;
void insertfirst()
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==null)
{
 printf("\nNo space available\n");
 return;
 }
 newnode->link=null;
 printf("\n enter the value to insert to front\n");
 scanf("%d",&newnode->data);
 if(head==null)
 {
  head=newnode;
  }
  else
  {
   newnode->link=head;
   head=newnode;
   }
   printf("\n element inserted %d",newnode->data);
   }
   void insertlast()
   {
   struct node*temp=head,*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   if(newnode==null)
   {
    printf("no space available\n");
    return;
    }
    newnode->link=null;
    printf("\n enter the element to insert last\n");
    scanf("%d",&newnode->data);
    if(head==null){
    head=newnode;
    }
    else
    {
    while(temp->link=null){
    temp=temp->link;
    }
    temp->link=newnode;
    }
    printf("element inserted successfully %d",newnode->data);
    }
    void insertlocation()
    {
    int key;
    struct node*temp=head,*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==null)
    {
      printf("\n no space available\n");
      return;
      }
      newnode->link=null;
      if(head==null)
      {
       printf("\n list empty\n");
       return;
       }
     printf("\n enter the key were after you want to  add elements\n");
     scanf("%d",&key);
     while(temp!=null&& temp->data!=key)
     {
      temp=temp->link;
       }
      if(temp==null)
      {
       printf("\n value not exit\n");
       return;
      }
      printf("\n enter the element to insert\n");
      scanf("%d",&newnode->data);
      newnode->link=temp->link;
      temp->link=newnode;
       printf("value inserted successfully %d",newnode->data);
       }
       void deletefirst()
         {
         struct node*temp=head;
         if(head==null)
         {
          printf("\nlist is empty");
          return;
          }
          head=temp->link;
          printf("\n value deleted %d\n",temp->data);
          free(temp);
          }
          void deletelast()
          {
          struct node*temp=head,*prev=null;
          if(head==null)
          {
           printf("\n empty list\n");
           return;
           }
           if(temp->link==null)
           {
           printf("value %d deleted\n",temp->data);
           head=null;
           free(temp);
           return;
           }
           while(temp->link!=null)
           {
            prev=temp;
            temp=temp->link;
            }
            printf("value %d deleted\n",temp->data);
            prev->link=null;
            free(temp);
            }
            void deletelocation()
            {
            int key;
            struct node*temp=head,*prev=null;
            if(head==null)
            {
             printf("\nempty list\n");
             return;
             }
             printf("\n enter the key that you want to delete");
             scanf("%d",&key);
             if(temp->data==key)
             {
              head=temp->link;
              printf("\n value %d is deleted\n",temp->data);
              free(temp);
              return;
              }
              while(temp!=null && temp->data!=key)
              {
               prev=temp;
               temp=temp->link;
               }
               if(temp==null)
               {
                printf("\nvalue not exit\n");
                return;
                }
                prev->link=temp->link;
                printf("value %d is deleted",temp->data);
                free(temp);
                }
                void search()
                {
                struct node*temp=head;
                int pos=0,found=0,val;
                if(head==null)
                {
                 printf("empty list\n");
                 return;
                 }
                 printf("\nEnter the value to search");
                 scanf("%d",&val);
                 while(temp!=null)
                 {
                  if(temp->data==val)
                  printf("value found at location %d",temp->data,pos);
                  found;
                  }
                  pos++;
                  temp=temp->link;
                  }
                  if(!found)
                  {
                   printf("value %d not exit",val);
                   }
                   }
                   void display()
                   {
                    struct node*temp=head;
                    if(temp==null)
                    {
                     printf("\n list empty");
                     return;
                     }
                     printf("element in the list\n");
                     while(temp!=null)
                     {
                      printf("%d",temp->data);
                      temp=temp->link;
                      }
                      }
                      void main()
                      {
                      int choice;
                      printf("\n SINGLY LINKED LIST");
                      do{
                       printf("\n1.insertfirst\n2.insertlast\n3.insertlocation\n4.deletefirst\n5.deletelast\n6.deletelocation\n7.search\n8.display\n9.exit");
                       printf("\nenter choice");
                       scanf("%d",&choice);
                       switch(choice){
                       case 1:
                       switch(choice)
                       {
                       case 1:insertfirst();
                       break;
                       case 2:insertlast();
                       break;
                       case 3:insertlocation();
                       break;
                       case 4:deletefirst();
                       break;
                       case 5:deletelast();
                       break;
                       case 6:deletelocation();
                       break;
                       case 7:search();
                       break;
                       case 8:display();
                       break;
                       case 9:printf("Exiting");
                       break;
                       default:printf("Invalid choice!!");
                       }
                       }while(choice!=9);
                       }
                       }
                       
                       
                       
                                             
                    
