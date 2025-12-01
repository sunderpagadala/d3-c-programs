//armstrong number
#include <stdio.h>
int main() 
{
    int n,r,c=0,t;

    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
while(n!=0)
{
	r=n%10;
	c=c+r*r*r;
	n=n/10;
}
if(c==t)
{

printf("armstrong=%d",c);
}
else
{
printf("not armstrong=%d",c);
}


}