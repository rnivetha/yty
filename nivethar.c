#include<stdio.h>
#include<conio.h>
void main()
{
int m,n,i,j;
int count=0;
printf(" enter the number of students:");
scanf("%d",&m);
n=2*m;
for(i=0;i<n;i++)
{
for(j=i+1;j<=n;j++)
{
printf("\n%d\t%d\n",i,j);
count++;
} }
printf("the daily walk combination is %d",count);
getch();
}
