#include<stdio.h>
void main()
{
char name [100];
printf("enter the name:\n");
scanf("%[^\n]s",name);
printf("The user name is :%s\n",name);
}