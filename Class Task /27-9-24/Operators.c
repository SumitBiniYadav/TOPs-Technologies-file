#include<stdio.h>\
//number is divisible by two or not...
int main() 
{
	int a;
	
	printf("Enter a Number : ");
	scanf("%d", &a);
	// we will try using the 'and operator' (&&) for executing this syntax  
	printf("%d", a % 2 == 0)&&(a % 2 != 1); // if the remainder of a divided by 2 is 0 and not 1 then the number is divisible by two..
	return 0;
}
