#include<Stdio.h>
#include<conio.h>
int main()
{
int b;
printf("enter the number");
scanf("%d",&b);
while((b%10)!=0)
{
b++;
}
printf("the multiple nearest  is %d",b);
return 0;
}
