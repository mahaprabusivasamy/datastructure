#include<stdio.h>
#include<stdlib.h>
void istam();
void insertatbegin();
void insertatend();
void insertatmiddle();
void display();
void deletionatfirst();
void deletionatend();
void  deletionatemiddle();

struct node
{
    int data;
    struct node*next;
}*head=0,*newnode,*temp;

int main()
{
    int a,co=0;
    printf("how much node u wish to create:");
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Element:");
    scanf("%d",&newnode->data);
    co++;
    if(head==0)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=newnode;
        
    }
    newnode->next=0;
    }
  display();
  istam();

}
void istam()
{
      printf("\nEnter 1-insert at begin\n");
      printf("Enter 2-insert at middle\n");
      printf("Enter 3-insert at end\n");
      printf("Enter 4-display\n");
      printf("Enter 5-deletion at begin\n");
      printf("Enter 6-deletion at end\n");
      printf("Enter 7-deletion at middle\n");
       int b;
      scanf("%d",&b);
      if(b<8){
      switch(b){
        case 1:
        insertatbegin();
        break;
        case 2:
        insertatmiddle();
        break;
        case 3:
        insertatend();
        break;
        case 4: 
        display();
        break;
        case 5:
        deletionatfirst();
        break; 
        case 6:
        deletionatend();
        break;
         case 7:
        deletionatemiddle();
        break;
 }
    }
    else
    printf("Enter the no less than 6\n");
}
void insertatbegin()
{
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter the element:\n");
   scanf("%d",&newnode->data);
   newnode->next=head;
   head=newnode;
   printf("Node is inserted\n");
   istam();
}
void insertatend()
{
         newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the element:\n");
  scanf("%d",&newnode->data);
  newnode->next=0;
  temp=head;
  while(temp->next!=0)
  {
    temp=temp->next;
   }
  temp->next=newnode;
   printf("Node is inserted\n");
  istam();
}
void insertatmiddle()
{
     newnode=(struct node*)malloc(sizeof(struct node));
     int i=2,pos;
     printf("Enter the position u want:");
     scanf("%d",&pos);
     temp=head;
     while(i<pos)
     {
         temp=temp->next;
         i++;
     }
     printf("Enter the element:\n");
     scanf("%d",&newnode->data);
     if(pos!=0)
     {
         newnode->next=temp->next;
         temp->next=newnode;
         
     }
     else{
     printf("Invalid position");}
     printf("Node is inserted");
      istam();
}
void display()
{
      
    temp=head;
    while(temp)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    istam();
}
void deletionatfirst()
{
    head=head->next;
    printf("Node is Deleted");
    istam();
 
}
 
void deletionatend()
{
   struct node*p;
    temp=head;
    while(temp->next!=0)
    {
              p=temp;
        temp=temp->next;
    }

      if(temp==head)
      {
          head=0;
      }
      else{
    p->next=NULL;}
    free(temp);
    printf("Node is inserted");
    istam();
}
void deletionatemiddle()
{
    struct node*p;
    int pos;
    printf("Enter the position u want:");
    scanf("%d",&pos);
    int i=1;
    temp=head;
    while(i<=pos)
{
    p=temp;
    temp=temp->next;
    i++;
}

    p->next=temp->next;
    free(temp);
    printf("Node is Deleted");
    istam();
}
