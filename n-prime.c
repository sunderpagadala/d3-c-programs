#include <stdio.h>

int main() 
{
    int n,j,i,c=0;

    
for(j=1;j<=10;j++)
{
c=0;	
for(i=1;i<=j;i++)
{
	if(j%i==0)
	{
		c++;
	}
}
if(c==2)
{
	printf("prime=%d\n",j);
}
}
}
