#include<stdio.h>

//functions with parameters and with return type.. 
int sum(int a, int b) //parameter a and b & return type int
{
	return a+b; //return....
}
int main()
{
	int a,b, result;
	
	printf("Enter a Number  : ");
	scanf("%d", &a);
	printf("Enter a Number  : ");
	scanf("%d", &b);
	
	result = sum(a,b);
	printf("The sum of the two Numbers is : %d", result); //arguments....
	return 0;
}
