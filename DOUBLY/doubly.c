#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head;
void insert_l(int d)
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
        newnode->next=head;
        newnode->prev=NULL;
        newnode->data=d;
        head=newnode;
    }
}
void insert_r(int d)
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
        struct node *temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->data=d;
        newnode->next=NULL;
        if(temp==head)
        {
            newnode->prev=head;
            
        }
        else
        {
         struct node *curr;
         curr=head;
         while(curr->next!=temp)
         {
             curr=curr->next;
         }
        newnode->prev=curr->next;
        
    }
    
}
}
void display()
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insert_p(int pos,int d)
{
    struct node *newnode,*temp,*curr;
    newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int i=0;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
   temp->next->prev=newnode;
   newnode->next=temp->next;
   newnode->data=d;
   newnode->prev=temp;
   temp->next=newnode;
    
    
}
int main()
{
    while(1)
    {
        int ch;
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                int m;
                scanf("%d",&m);
                insert_l(m);
                
                break;
            }
            case 2:
            {
                int n;
                scanf("%d",&n);
                insert_r(n);
                break;
            }
            case 3:
            {
                int o,p;
                scanf("%d %d",&o,&p);
                insert_p(o-1,p);
                printf("Node Inserted\n");
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            printf("Wrong Choice");
        }
    }
}
