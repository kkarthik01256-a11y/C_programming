#include <stdio.h>

void main()
{
    int size;
    printf("Enter how many values to be stored\n");
    scanf("%d",&size);
    int a[size];
    for(int i = 0; i <=(size-1); i++)
    {
    printf("Enter the %d value \n",i+1);
    scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<=(size-1);i++)
    {
    if(a[i]>max)
    {
    max=a[i];
    }
    }

printf("max value is %d\n",max);
}