#include<stdio.h>
void main()
{
int option;
printf("The food items available are:\n");
printf("1.pani puri\n");
printf("2.ctton candy\n");
printf("3.chicken biryani\n");
printf("4.bitter gaurd\n");
printf("please enter the option to select the food item\n");
scanf("%d",&option);
switch (option)
{
case 1:
{
printf("pani puri is odered\n");
}break;
case 2:
{
printf("cotton candy  is odered\n");
}break;
case 3:
{
printf("chicken biryani  is odered\n");
}break;
case 4:
{
printf("bitter gaurd is odered\n");
}break;
default:
{
printf("please select the valid option\n");
}
}
}