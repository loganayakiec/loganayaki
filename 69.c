#include<stdio.h>
#include<conio.h>
int main()
{
int a,c,d;
printf("enter the two numbers");
scanf("%d%d",&a,&c);
d=a-c;
printf("d value is %d:\n");
if(d%2==0)
printf("%d id even");
else
printf("%d is odd");
return 0;
}
