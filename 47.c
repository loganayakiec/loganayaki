#include<stdio.h>
#include<conio.h>
int main()
{
int a[50],i,n,large,small;
printf("how many elements:");
scanf("%d",&n);
printf("enter the array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
large=small=a[0];
for(i=1;i<n;i++)
{
if(a[i]>large)
large=a[i];
if(a[i]<small)
small=a[i];
}
prinf("thr largest element is %d",large);
printf("\n the smallest element is %d",small);
return 0;
}
