#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* pre;
};
struct node* head;
void create(int a)
{
    struct node* newnode,*temp;
     newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=newnode;
        newnode->data=a;
        newnode->pre=NULL;
        newnode->next=NULL;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->data=a;
        newnode->pre=temp;
        newnode->next=NULL;
    }
}
void rev()
{
    struct node* temp,*rev;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    rev=temp;
    while(rev!=NULL)
    {
        printf("%d ",rev->data);
        rev=rev->pre;
    }
    printf("\n");
}
void display()
{
    struct node* temp=head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
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
        display();
    
}
