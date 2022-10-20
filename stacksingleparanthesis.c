
//bracket paranthesis

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char satck[100];
void push(char a);
void pop();
void find_top();
void main()
{
    char a[100];
    scanf("%s",a);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            push(a[i]);
        }
        else if(a[i]==')')
        {
            pop();
        }
    }
    find_top();
}
void push(char a)
{
    satck[top]=a;
    top++;
}
void pop()
{
    if(top==-1)
    {
        printf("expression is invalid\n");
        exit(0);
    }
    else
    {
        top--;
    }
}
void find_top()
{
    if(top==-1)
    printf("\nexpression is valid\n");
    else
    printf("\nexpression is invalid");
}

//input

//()
 
//ouput
//expression is valid

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
