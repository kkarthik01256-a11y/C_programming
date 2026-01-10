#include <stdio.h>
int main()
{
int A[10][10],B[10][10],C[10][10];
int r1,c1,r2,c2;
int i,j,k;
printf("Enter row and column the first number");
scanf("%d %d",&r1, &c1);
printf("Enter row and column the second number");
scanf("%d %d",&r2, &c2);
if(c1 != r2)
{
printf("matrix multiplication not possible");
return 0;
}
printf("Enter element of first matrix");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
scanf("%d",&A[i][j]);

}
}
printf ("Enter element of second matrix");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
scanf("%d",B[i][j]);
}
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
C[i][j]=0;
for(k=0;k<c1;k++)
{
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
printf("product of the two matrix:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d", C[i][j]);
}
printf("\n");
}
return 0;
}