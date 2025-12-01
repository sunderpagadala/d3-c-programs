//reverse order array elements printing
void main()
{

int i,a[100];
//0,1,2,3 index number

//reading or input array element
for(i=1;i<=5;i++)
{
	printf("enter a array elements:");
	scanf("%d",&a[i]);
}

//output array element
for(i=5;i>=1;i--)
{

printf("\narray elements%d\n:",a[i]);

}
}
