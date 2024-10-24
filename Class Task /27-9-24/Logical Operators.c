#include<stdio.h>
//Logical Operators
int main()
{
	//And Operator...
	int itsSunday = 1;
	int	itsSnowing = 1;
	 
	printf("%d", (itsSunday == 1)&&(itsSnowing == 1));
	
	//Or Operator...
	int itsMonday = 1;
	int itsRaining = 0;
	
	printf("\n%d", (itsMonday == 1)||(itsRaining == 1));
	
	// if a number is greater than 9 & less than 100.. solving using Relational and Logical Operators..
	int num;
	
	printf("\nEnter a Number : ");
	scanf("%d", &num);
	
	printf("\n%d", (num>9)&&(num<100) );
	
	return 0;
}
