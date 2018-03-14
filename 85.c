#include<stdio.h>
#include<conio.h>
int main()
{
char s[100];
int i;
printf("enter the string");
scanf("%s",&a);
for(i=0;s[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",&a[i]);
}
}
printf(" ");
for(i=0;a[i]!='\0';i++)
{
if(i%2!=0)
{
printf("%c",&a[i]);
}
}
return 0;
}
