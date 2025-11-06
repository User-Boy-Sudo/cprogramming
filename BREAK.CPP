#include<stdio.h>
#include<conio.h>
void main(){
int i=0;
clrscr();
while (i<11)
{
 i++;
 if(i==3)
 {
 break;
 }
 printf("%d\n",i);
getch();
}
}