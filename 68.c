#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,d;
printf("enter the limit");
scanf("%d",&n);
printf("enter the number");
scanf("%d",&d);
printf("\n the number disible by %d are:\n\n",d);
for(i=1;i<n;i++)
if(i%d==0)
printf("%d\t",i);
return 0;
}
