#include<stdio.h>

main()
{
	int a , b , n;                                      //variable decleration !!!!
	printf("Enter A Number : ");                                  
	scanf("%d", &a);
	printf("\nEnter A Number : ");
	scanf("%d", &b);
	
	printf("------------Menu-------------");          //menu driven switch case !!!!
	printf("\nPress 1 for Additon !!!");
	printf("\nPress 2 for Substraction !!!");
	printf("\nPress 3 for Multiplication !!!");
	printf("\nPress 4 for Division !!!");
	printf("\nPress 5 for Exit !!!");
	
	
	printf("\nEnter Yout Choice : ");                 //enter your choice from the following menu !!!!
	scanf("%d", &n);
	
	switch(n)                                         //switch conditional statement used to execute the choice !!!
	{
		case 1 : printf("Addition of two digits : %d + %d = %d", a , b , a+b);
		break;
		case 2 : printf("\nSubstraction of two digits : %d - %d = %d", a , b , a-b);
		break;
		case 3 : printf("\nMultiplication of two digits : %d * %d = %d", a , b, a*b);
		break;
		case 4 : printf("\nDivision of two digits : %d / %d = %d", a, b, a/b);
		break;
		case 5 : printf("\nThank You !!!");
		break;
		default : printf("Invalid Input !!!!");
    }
}
