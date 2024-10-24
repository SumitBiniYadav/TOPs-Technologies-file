#include<stdio.h>
int main()
{
	int a,b=1;
	printf("Enter a No.");
	scanf("%d", &a);
	
	while (b<=a) // we put a condition to add b or 1 till it is less than or equal to 1, which will help to increment 1 till the input..
	{
		printf("\n%d", b);
		b++;
	}
	return 0;
}
