#include<stdio.h>
//nested if else.. 
int main()
{
	int num1,num2,num3;
	
	printf("Enter Number 1 : ");
	scanf("%d", &num1);
	
	
	printf("Enter Number 2 : ");
	scanf("%d", &num2);
	
	printf("Enter Number 3 : ");
	scanf("%d", &num3);
	
	if (num1 > num2)  // if num1 is greater than num2: 
	{
		if (num1 > num3) // if num1 is greater than num3: 
		{
			printf("%d is Greatest", num1);
		}
		else 
		{
			printf("%d is Greatest", num3); //if num1 is not greater than num3 then num3 is the greatest num.. 
		}
	}
	else
	{
		if (num2>num1)
		{
			printf("%d is Greatest", num2);
		}
		else
		{
			printf("%d is Greatest", num3);
		}
	}
	return 0;
	
	/*
	This is An example of neseted IF Else taught in the class, needs to be practised at home... 
	*/
}
