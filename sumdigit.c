//sum of digit
#include <stdio.h>

int main() 
{
    int n,r,c=0;

    printf("Enter a number: ");
    scanf("%d", &n);
while(n!=0)
{
	r=n%10;
	c=c+r;
	n=n/10;
}
printf("sumdigit=%d",c);
}