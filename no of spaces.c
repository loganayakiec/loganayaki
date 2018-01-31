#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100];
int i=0;l=0;f=1;
printf("enter any string \n");
for(i=0;str[i]!='\0';i++)
{
l=l+1;
}
printf("the no of characteristics in the string are %d \n",l);
for(i=0i<=l-1;i++)
{
if(str[i]==l)
{
f=f+1;
}
}
printf("the no of words in string are %d",f);
getch();
}
