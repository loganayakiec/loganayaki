#include<stdio.h>
#include<conio.h>
int main()
{
int n,i,flag=0;
printf("enter the numbers");
scanf("%d",&n);
for(i=0;i<n;i=i+2)
{
if(n%i==0)
flag=1;
}
if(flag==0)
printf("prime number");
else
printf("not a prime number");
}
