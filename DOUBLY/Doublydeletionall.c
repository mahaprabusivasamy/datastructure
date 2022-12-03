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
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        head=newnode;
        newnode->data=a;
        newnode->next=NULL;
        newnode->pre=NULL;
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
        // insert right 
        //  if(temp==head)
        // {
        //     newnode->pre=head;
        // }
        // else
        // {
        //     struct node *curr;
        //     curr=head;
        //     while(curr->next!=temp)
        //     {
        //         curr=curr->next;
        //     }
        //     newnode->pre=curr->next;
        // }
     newnode->pre=temp;  ///normal scan
        newnode->next=NULL; // for node
    }
    
}
void delete_l()
{
    struct node* temp;
    temp=head;
    head=temp->next;
    free(temp);
}
void delete_r()
{
    struct node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->pre->next=NULL;
}
void delete_p(int a)
{
    struct node*temp,*pp;
    temp=head;
    pp=head;
    int i=0;
    while(i<a-1)
    {
        temp=temp->next;
        i++;
    }
    while(pp->next!=temp)
    {
        pp=pp->next;
    }
    pp->next=temp->next;
    temp->next->pre=pp;
    free(temp);
    
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
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int k;
        scanf("%d",&k);
        create(k);
    }
    int ch;
    while(1)
    {
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:{
            delete_l();
            break;}
            case 2:{
            delete_r();
            break;}
            case 3:{
                int b;
            scanf("%d",&b);
            delete_p(b);
            break;}
            case 4:{
            display();
            break;}
            case 5:{
            exit(0);
            break;}
            default:{
            printf("wrong choice");
            break;}
        }
    }
}
