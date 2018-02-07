#include<stdio.h>
#include<onio.h>
int main()
{
int a,b,c,i,n;
printf("enter the n terms");
scanf("%d",&n);
a=1;
b=0;
c=1;
printf("enter tyhe fibonacci terms\n");
for(i=0;i<n;i++)
{
printf("%d",c);
a=b;
b=c;
c=a+b;
}
return 0;
}
