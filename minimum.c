#include<stdio.h>
int main()
{
int arr[100],minimum,size,c,location=1;
printf("enter the number of elements in array\n");
scanf("%D",&size);
for(c=0;c<size;c++)
{
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(array[c]<minimum)
{
minimum=array[c];
location=c+1;
}
}
printf("minimum element is present at location %d and its value is %d\n",location minimum);
return o;
}
