#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,temp;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swapping the numbers %d%d",a,b);
return 0;
}
