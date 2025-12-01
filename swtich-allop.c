// Online C compiler to run C program online
#include <stdio.h>

int main() {
int a,b,c,ch;
printf("enter a, b value");
scanf("%d%d",&a,&b);
//printf("enter a, b value");
//scanf("%d",&b);


printf("1.addition\n");
printf("2.substraction\n");
printf("3.multiplication\n");
printf("4.division\n");
printf("5.modulas\n");

printf("enter your choice:");
scanf("%d",&ch);

switch(ch)
{
case 1:
c=a+b;
printf("addition=%d",c);
break;

case 2:
c=a-b;
printf("sub=%d",c);
break;


case 3:
c=a*b;
printf("mul=%d",c);
break;

case 4:
c=a/b;
printf("division=%d",c);
break;

case  5:
c=a%b;
printf("mod=%d",c);
break;

default:
printf("your enter wrong choice");
break;
}
}
