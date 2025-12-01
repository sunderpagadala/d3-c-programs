//read students and  print marks
void main()
{

int i,rno[14],cp[14],eng[14];
//0,1,2,3 index number

//reading or input array element
for(i=1;i<=3;i++)
{
	printf("enter rno elements:");
	scanf("%d",&rno[i]);
	
	printf("enter cp elements:");
	scanf("%d",&cp[i]);
	
	printf("enter eng elements:");
	scanf("%d",&eng[i]);
	printf("\n");
}

//output array element
for(i=1;i<=3;i++)
{
printf("rno:=%d\n:",rno[i]);
printf("cp:=%d\n:",cp[i]);
printf("eng:=%d\n:",eng[i]);	
printf("\n");
}	
}

