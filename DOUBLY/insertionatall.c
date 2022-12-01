#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* pre;
    struct node* next;
};
struct node* head;
void insert_l(int a)
{
    struct node*newnode;
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
        newnode->next=head;
        newnode->data=a;
        newnode->pre=NULL;
        head=newnode;
      
    }
}
void insert_r(int a)
{
    struct node *newnode;
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
        struct node* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->data=a;
        // newnode->pre=temp;
        newnode->next=NULL;
          if(temp==head)
        {
            newnode->pre=head;
        }
        else
        {
            struct node *curr;
            curr=head;
            while(curr->next!=temp)
            {
                curr=curr->next;
            }
            newnode->pre=curr->next;
        }
    }
}
void insert_p(int a,int p)
{
    struct node*temp,*curr;
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    temp=head;
    int i=0;
    while(i<p-1)
    {
        temp=temp->next;
        i++;
    }
    temp->next->pre=newnode;
    newnode->next=temp->next;
    newnode->data=a;
    newnode->pre=temp;
    temp->next=newnode;
}
void display()
{
    struct node*temp=head;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int a;
    while(1)
    {
        scanf("%d",&a);
        switch(a)
        {
            case 1:{
                int b;
                scanf("%d",&b);
                insert_l(b);
                break;
            }
            case 2:
            {
                int c;
                scanf("%d",&c);
                insert_r(c);
                break;
            }
            case 3:
            {
                int d,p;
                scanf("%d%d",&d,&p);
                insert_p(d,p-1);
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
            default:{
            printf("wRONG CHOICE");
            break;}
        }
        
    }
}
