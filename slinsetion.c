#include<stdio.h>
#include<stdlib.h>
void display();
void insertionatfirst();
void insertionatend();
void insertionatmiddle();

    struct node{
        int data;
        struct node*next;
    }*head,*newnode,*temp;
    void main()
{
    head=0;
    int ch;  int count=0;;
    while(ch)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("press 1 to continue/0 to stop:");
        scanf("%d",&ch);
       
    }
    display();
    insertionatfirst();
    display();
    insertionatend();
    display();
    insertionatmiddle();
    display();
}
void display()
{
  
     temp=head;
    while(temp!=0)
    {
        printf("%d->",temp->data);
        temp=temp->next;
      
    }
}
void insertionatfirst()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter u want insert data:");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
    
}
void insertionatend()
{
     newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter u want insert data at end:");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=head;
    while(temp->next!=0)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertionatmiddle()
{
    int pos,i=1;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the position");
    scanf("%d",&pos);
    
    // while(temp!=0)
    // {
    //     count++;
    // }
    // if(pos>count)
    // {
    //     printf("invalid position");
    // }
    // else
    // {
    temp=head;
            
        while(i<pos)
        {
            temp=temp->next;
            i++;
        }
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        temp->next=newnode;
    // }
    
    
}

