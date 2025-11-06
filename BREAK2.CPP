#include<stdio.h>
#include<conio.h>
void main(){
int a;
clrscr();
printf("please enter a no between 1 and 5");
scanf("%d",&a);
switch(a)
{
case 1:
printf("you chose one");
break;
case 2:
printf("you chose two");
break;
case 3:
printf("you chose three");
break;
case 4:
printf("you chose four");
break;
case 5:
printf("you chose five");
break;
}
}