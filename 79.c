#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
c=a*b;
if(c==(a*a)&&c==(b*b))
{
printf("YES");
}
else
{
printf("NO");
}
}
