#include<stdio.h>
void main()
{
int a;
printf("Enter the number ");
scanf("%d",&a);
while(a!=0)
{
int digit=a%10;
printf("%d\n",digit);
a=a/10;
}
}