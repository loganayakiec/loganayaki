#include<stdio.h>
#include<conio.h>
int main()
{
inti,word count=0;
char str[100];
printf("enter the string");
scanf("%s",&str[100]);
for(i=0;i<str[i]!='\0';i++)
{
if(str[i]!==' '&str[i+1]!==' ')
wordcount++;
}
if(wordcount>1)
printf("total number of string is %d",wordcount+1);
return 0;
}
