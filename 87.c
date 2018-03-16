#include<stdio.h>
#include<conio.h>
int main()
{
int k,l,s=1,i;
printf("enter the numbers");
scanf("%d %d",&k,&l);
for(i=2;i<=l;i++)
{
if(k%i==0&&l%i==0)
{
s=s*i;
break;
}
}
printf("%d",s);
return 0;
}
