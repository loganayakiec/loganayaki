#include<stdio.h>
#include<conio.h>
int main()
{
    int l,w,h,volume,area;
    printf("enter the values");
    scanf("%d\t %d\t %d\t",&l,&w,&h);
    volume=l*w*h;
    area=2*((l*w)+(h*l)+(h*w));
    printf("the volume of cuboid is:%d",volume);
    printf("the area of cuboid is:%d",area);
    return 0;
}
