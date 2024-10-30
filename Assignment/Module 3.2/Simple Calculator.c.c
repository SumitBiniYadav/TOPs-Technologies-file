#include<stdio.h>
int main()
{
	int Num1, Num2, i ;
	char fun;
	
		for (i=0; i<=5; i++)
	{
		printf("\nEnter Number 1 :");
	scanf("%d", &Num1);
	
	printf("Enter Number 2 : ");
	scanf("%d", &Num2);
	
	getchar();
	printf("Enter a function  + , - , * , /, % : ");
	scanf("%c", &fun);
	
	switch (fun)
	{
		case '+': printf("\nResult :%d", Num1+Num2);
		break;
		
		case '-' : printf("\n%d", Num1-Num2);
		break;
		
		case '*' : printf("\n%d", Num1*Num2);
		break;
		
		case '/' : printf("\n%d", Num1/Num2);
		break;
		
		case '%' : printf("\n%d", Num1%Num2);
		break;
	}
	}
	
	
	return 0;
}
