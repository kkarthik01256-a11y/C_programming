#include <stdio.h>
int main ()
{
int arr[5]={5,10,15,20,25};
int element = 30;
for (int i=0 ; i<5 ; i++)
{
if(arr[i] = element )
{
printf("element found at %d position\n",i);
break;
}
else
{
printf("not found ");
}
}
return 0;
}