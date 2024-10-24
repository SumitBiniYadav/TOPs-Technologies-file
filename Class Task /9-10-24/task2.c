 #include<stdio.h>
//dynamic array
int main()
{
	int a[4], sum=0;
	int i;
	
	for(i=0; i<4; i++)
	{
		printf("Enter Number :");
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<4;i++)
	{
		printf("\n%d", a[i]);
	}
	printf("\n%d is the Total ", sum);
	
	return 0;
}
