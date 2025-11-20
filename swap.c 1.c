#include<stdio.h>
void main () 
{
int a=10;
int b=20;
int c;
printf("The a and b values before swap is %d and %d\n",a,b);
c=b;
b=a;
a=c;
printf("The a and b values after swap is %d and %d",a,b);
}