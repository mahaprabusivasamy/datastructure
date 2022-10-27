/*question  reverse the five integer */

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void create(int d)
{
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=newnode;
        newnode->data=d;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else
    {
      struct node*temp;
      temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;
      }
      temp->next=newnode;
      newnode->data=d;
      newnode->prev=temp;
      newnode->next=NULL;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
    
}
void rev()
{
    struct node *temp,*rev;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    rev=temp;
    while(rev!=NULL)
    {
     printf("%d ",rev->data);
     rev=rev->prev;
    }
}
int main()
{
    for(int i=0;i<5;i++)
    {
        int k;
        scanf("%d",&k);
        create(k);
    }
    rev();
    printf("\n");
    display();
}
