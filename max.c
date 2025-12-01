//max element array  print
#include<stdio.h>
void main()
{

int i,a[100],max;
//1,2,3 4 5index number
//9,8,3,8,5 element
//reading or input array element
for(i=0;i<3;i++)
{
	printf("enter a array elements:");
	scanf("%d",&a[i]);
}

max=a[1];
//output array element
for(i=0;i<3;i++)
{
	if(a[i]>max)
	{
	 max=a[i];
	 
	}

}
printf("max array element=%d\n:",max);

}
