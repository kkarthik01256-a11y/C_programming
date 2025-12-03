#include<stdio.h>
void main ()
{
int a;
printf("enter the number\n");
scanf("%d",&a);
int n=a;
int rev=0;
while(a!=0)
{
int digit=a%10;
rev=rev*10+digit;
a=a/10;
}
if(rev==n)
{
printf("%d is a palindrome number\n",n);
}
else
{
printf("%d is not a palindrome number/n",n);
}
}
    