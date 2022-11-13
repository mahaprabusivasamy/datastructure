// You are using GCC
#include<stdio.h>
#include<stdlib.h>
void display(int );
struct node
{
    int data;
    struct node* next;
}*head,*newnode,*temp;
void createnode(int a)
 { 
     for(int i=0;i<a;i++){
    head==NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
  scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    newnode->next=head;
    head=newnode;
     }
    
}

int main()
{
    int a;
    scanf("%d",&a);
    createnode(a);
    display(a);
    
}
void display(int a)
{
    temp=head;
    
    for(int i=0;i<a;i++)
    {
        if(temp==NULL)
        {
            printf("empty");
        }
        else{
        printf("%d ",temp->data);
        }
        temp=temp->next;
    }
}

/*
INPUT: 
5
12 13 14 15 16

OUTPUT:
16 15 14 13 12 
