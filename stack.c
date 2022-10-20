////
//stack reverse
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
char stack[size];
int top;

char pop();
void push(char a);
int main()
{
    top=-1;
    char str[size];
    scanf("%[^\n]s",str);
    for(int i=0;i<strlen(str);i++)
    push(str[i]);
    for(int i=0;i<strlen(str);i++)
    str[i]=pop();
    return 0;
}
void push(char a)
{
    if(top>=size-1)
    {
        printf("stack is full");
    }
    else
    top++;
    stack[top]=a;
}
char temp;
char pop()
{
    if(top<-1)
    {
        printf("stack is empty");
    }
    else
    printf("%c",stack[top]);
    temp=stack[top];
    top--;
    return temp;
}

//input 
//kongu college

//ouput
//egelloc ugnok
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

