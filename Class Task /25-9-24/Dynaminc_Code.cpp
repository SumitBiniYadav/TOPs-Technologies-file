#include<stdio.h>
main()
{
	int a,b; //data member
	
	printf("Enter Number 1: ");
	scanf("%d", &a); //for input from users. //& is mprecent used to import data from the input, therefore the input of 2 will be imported to a.
	printf("Enter NUmber 2: ");
	scanf("%d", &b);  //& is mprecent used to import data from the input, therefore the input of 2 will be imported to b.
	
	printf("Addtion : %d", a+b);
	printf("\nSubstraction : %d", a-b);
	printf("\nDivision : %.2f",(float) a/b);  //type casting into float data
	printf("\nMultiplication : %d", a*b); 
}
