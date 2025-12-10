#include<stdio.h>
int main () 
{
int num1;
int num2;
int num3;
int num4;
float average;
printf("Enter the num1 value: \n");
scanf("%d", &num1);
printf("Enter the num2 value: \n");
scanf("%d", &num2);
printf("Enter the num3 value: \n");
scanf("%d", &num3);
printf("Enter the num4 value: \n");
scanf("%d", &num4);
average = (num1 + num2 + num3 +num4) / 4.0;
printf("average of the four values  is %2f\n",average);
}