#include<stdio.h>
#include<conio.h>
int main()
{
int i,number;
printf("enter the positive number:");
scanf("%d",&number);
printf("factors of %d are:",number);
for(i=1;i<=number;++i)
{
if(number%i==1)
{
printf("%d",i);
}
}
return 0;
}
