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
	c=c*10+r;
	n=n/10;
}
if(c==t)
{

printf("palindrome=%d",c);
}
else
{

printf("not palindrome=%d",c);
}


}