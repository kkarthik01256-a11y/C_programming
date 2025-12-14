#include<stdio.h>
void swap(int*m,int*n);
void main ()
{
int a;
int b;
printf("Enter the value in a\n");
scanf("%d",&a);
printf("Enter the value in b\n");
scanf("%d",&b);
printf("Before swap a=%d b=%d\n",a,b);
swap(&a, &b);
printf("After swap a=%d b=%d\n",a,b);
}
void swap(int *m,int *n)
{
int c=*m;
*m=*n;
*n=c;
}
