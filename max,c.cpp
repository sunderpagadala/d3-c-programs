//max element array  print
#include<stdio.h>
void main()
{

int i,a[100],max;
//1,2,3 4 5index number
//9,8,3,8,5 element
//reading or input array element
for(i=1;i<=5;i++)
{
	printf("enter a array elements:");
	scanf("%d",&a[i]);
}

max=a[0];
//output array element
for(i=5;i>=1;i--)
{
	if(a[i]>max)
	    max=a[i];

}
printf("\narray elements sum=%d\n:",max);

}
