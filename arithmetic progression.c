#include<stdio.h>
#include<conio.h>
int main()
{
int a,d,n,i;
int sum=0;
printf("enter the first term value of arithmetic progression serios:");
scanf("%d",&a);
printf("enter total number in the arithmetic progression serious:");
scanf("%d",&n);
printf("enter the common difference arithmetic progression serious:");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of the arithmetic progression serious:");
for(i=a;i<n;i=i+d)
{
if(i!=n)
printf("%D+",i);
else
printf("%d+",i,sum);
}
return o;
}
