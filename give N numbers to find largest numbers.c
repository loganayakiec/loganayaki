#include<stdio.h>
int nain()
{
int i,n,array[100];
printf("enter the elements of an array(1to100)");
scanf("%",&n);
for(i=0i<n;++i)
{
printf("enter the number %d",i+1);
scanf("%d",&arra[i]);
}
for(i=0;i<n;++i)
{
if(arr[0]<arr[i])
arr[0]=arr[i];
}
printf("largest number is %d",arr[0]);
return 0;
}
