#include<stdio.h>
#include<string.h>
void main()
{
char s1[5]="Magic";
char s2[5]="Logic";
printf("s1=%s\n",s1);
strcat(s1,s2);
printf("s1=%s\n",s1);
}