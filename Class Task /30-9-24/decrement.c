#include<stdio.h>
int main()
{
	int a;
	printf("Enter Input : ");
	scanf("%d", &a);
	
	while (a>=1) // if the number is greater than 1 then print number then decrease 1 from it...
	{
		printf("\n%d", a);
		a--;
	}
	return 0;
}
