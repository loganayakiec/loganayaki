#include<stdio.h>
#include<conio.h>
int main()
{
char str[50];
printf("enter the string");
int len;
len=strlen(str);
if(len%2!=0)
{
str=[(len-1)/2)='*';
}
else
{
str=len[len/2]='*';
str=len[(len/2)-1)='*';
}
printf("%s",str);
return 0;
}
