#include<stdio.h>
//leap year.. 
int main()
{
	int year;
	printf("Enter Year : ");
	scanf("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0 )||(year % 400 == 0)) // if the year is divisible by 4 and 400 but not by 100, the year is a leap year.. 
	{
		printf("%d is Leap Year", year);
	}
	else
	{
		printf("%d is Not Leap Year");
	}
	return 0;
}
