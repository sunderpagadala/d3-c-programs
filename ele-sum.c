//element sum array elements prin
void main()
{

int i,a[100],sum=0;
//1,2,3 4 5index number
//9,8,3,8,5 element
//reading or input array element
for(i=1;i<=5;i++)
{
	printf("enter a array elements:");
	scanf("%d",&a[i]);
}

//output array element
for(i=5;i>=1;i--)
{
	sum=sum+a[i];

}
printf("\narray elements sum=%d\n:",sum);

}
