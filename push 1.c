#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int value)
{
if(top==size-1)
{
printf("stack full");
}
else
{
top=top+1;
stack[top]=value;
}
}
void pop()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("pop=%d",stack[top]);
top=top-1;
}
}
void peek()
{
if(top==-1)
{
printf("stack is empty");
}
else
{
printf("peek=%d",stack[top]);
}
}
int main()
{
push(10);
push(20);
push(30);
push(40);
pop();
peek();
}