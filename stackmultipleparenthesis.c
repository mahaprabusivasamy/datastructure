#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100
char stack[MAX];
int top=-1;
int count=0;
void push(char a)
{
if(top == MAX-1)
{
printf("Stack Overflow\n");
exit(1);
}
top++;
stack[top] = a;
}
void pop()
{
if(top == -1)
{
printf("Invalid Expression\n");
exit(1);
}
top--;
}
void top_of_stack()
{
if(top == -1)
printf("Valid Expression\n");
else printf("Invalid Expression\n");
}
int main()
{
char string[100];
scanf("%[^\n]s",string);
int len = strlen(string);
for(int i=0;i<len;i++)
{
if(string[i] == '(' || string[i]=='{' || string[i]=='[')
push(string[i]);
else if(string[i] == ')' || string[i]==']' || string[i]=='}')
{
if(string[i] == ')')
{
if(stack[top] == '(' )
pop();
else {
printf("Invalid Expression\n");
exit(1);
}
}
if(string[i] == ']')
{
if(stack[top] == '[')
pop();
else {
printf("Invalid Expression\n");
exit(1);
}
}
if(string[i] == '}')
{
if(stack[top] == '{')
pop();
else {
printf("Invalid Expression\n");
exit(1);
}
}
}
}
top_of_stack();
}
//
//input 
//{([])}

//output
//{([])}
