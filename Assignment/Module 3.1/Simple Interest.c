#include<stdio.h>
int main()
{
	int p, t; // declaring variables of int data type..
	float r; // declaring variables of float data type..
	printf("Enter Principle Amount : ");
	scanf("%d", &p);
	
	printf("Enter Time Duration : ");
	scanf("%d", &t);
	
	printf("Enter Rate Of Interest : ");
	scanf("%f", &r);
	
	//formula for finding simple interest..
	printf("\nThe Simple Interest is : %.2f ", (p*r*t)/100); // using brackets for prioritizing the operations..
	printf("\nThe total Payable Amount will be : %.2f", (p+(p*r*t)/100));
	
	return 0;
}
