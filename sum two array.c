#include <stdio.h>

void main()
{
    int a[]={-1,3,4,6,9};
    int b[]={3,-11,6,-9,10};
    int sum[5];
    for(int i=0; i<=4; i++)
    {
    sum[i]=a[i]+b[i];
    }
    for(int i=0; i<=4; i++)
    {
    printf("sum[%d]=%d\n",i,sum[i]);
    }
    }