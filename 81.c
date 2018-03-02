#include<stdio.h>
#include<conio.h>
int main()
{
int a1,a2;
printf("enter the numeber");
scanf("%d %d",&a1,&a2);
if(a1>a2)
{
printf("%d",a1-a2);
}
else
{
printf("%d",a2-a1);
}
return 0;
}
