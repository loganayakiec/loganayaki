#include<stdio.h>
#include<conio.h>
int main()
{
char a[50];
    int i,l,j,c=0;
    printf("enter the string");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {for(j=i+1;j<l;j++)
    {
    if(a[i]==a[j])
    {
        c++;
    }
    }
    }
    if(c==0)
    {
        printf("the character is isogram");
    }
    else
    {
        printf("the character is not a isogram");
    }
    return 0;
}
