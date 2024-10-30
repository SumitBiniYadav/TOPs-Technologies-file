#include<stdio.h>
int main()
{
	int day;
	printf("Enter a Day : ");
	scanf("%d", &day);
	
	switch (day)
	{
		case 1 : printf("Monday");
		break;
		
		case 2 : printf("Tueday");
		break;
		
		case 3 : printf("Wednesday");
		break;
		
		case 4 : printf("Thrusday");
		break;
		
		case 5 : printf("Friday");
		break;
		
		case 6 : printf("Saturday");
		break;
		
		case 7 : printf("Sunday");
		break; 
		
		default : printf("Invaild Input");
	}
	return 0;
}
