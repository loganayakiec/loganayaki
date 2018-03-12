include<stdio.h>
int main()
{
  int a=11,b=10,c=90,d=60,e,f;
  printf("%d / %d\n",a,b);
  printf("(%d) % (%d)\n",c,d);
  e=a/b;
  f=c%d;
  printf("%d\n",e);
  printf("%d\n",f);
  return 0;
}
