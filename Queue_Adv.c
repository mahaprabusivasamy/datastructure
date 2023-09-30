#include<stdio.h>
#include<stdlib.h>
#define size 5
void enque();
void deque();
void display();
int q_arr[size];
int front=-1,rear=-1;
int main()
{
    int ch;
    while(1)
    {
        printf("Press enter 1 to enque \n");
        printf("press enter 2 to deque \n");
        printf("press enter 3 to display \n");
        printf("press enter 4 to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            enque();
            break;
            case 2:
            deque();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
        }
    }
}
void enque()
{
    int val;
    if(rear==size-1)
    {
        printf("overflow\n");
    }
    else{
        printf("Enter element to add :");
        scanf("%d",&val);
        printf("\n");
        if(front==-1)
            front=0;
        rear=rear+1;
        q_arr[rear]=val;
    
}
}
void deque()
{
    if(front==-1)
    {
        printf("underflow\n");
    }
    else{
        printf("The remove element in the queue is : %d\n",q_arr[front]);
        front=front+1;
        
    }
}
void display()
{
    printf("The queue elements are: ");
    if(front==-1)
    {
        printf("underflow\n");
    }
    
    else{
        for(int i=front;i<=rear;i++)
        {
            printf(" %d",q_arr[i]);
        }
        printf("\n");
    }
}
