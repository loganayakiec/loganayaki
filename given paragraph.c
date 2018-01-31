#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char[100];
int i=0;l=0;f=1;
clrscr();
printf("enter any string \n");
gets(str);
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("the number of line in the string are %d \n",l);
for(i=0;i<=l-1;i++)
{
if(str[i]=='')
{
f=f+1;
}
getch();
}
