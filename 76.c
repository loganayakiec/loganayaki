#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,factor;
printf("enter the number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
if(n%2==0)
{
factor=i;
}
}
if(factor>1)
{
printf("the given number is composite");
}
else
{
printf("the given number is not a composite");
}
return 0;
}
