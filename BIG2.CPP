#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
clrscr();
printf("enter the 3 values:");
scanf("%d%d",&a ,&b ,&c);
if(a>b && a>c)
{
printf("a is big");
}
else if (b>c && b>a)
{
printf("b is big");
}
else if(c>a && C>b)
{
printf("c is big");
}
else
{
printf("all are equal");
}
return 0;
}