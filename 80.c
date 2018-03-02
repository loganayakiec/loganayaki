#include<stdio.h>
#include<conio.h>
int main()
{
int num,rem;
printf("enter the number");
scanf("%d",&num);
printf("the odd numbers are:");
while(num!=0)
{
rem=num%10;
if(rem%2!=0||rem==0)
{
printf("%d\t",rem);
}
num=num/10;
}
return 0;
}
