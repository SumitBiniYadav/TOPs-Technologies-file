#include<stdio.h>
// this a practice and bigenner code for variable, input, output and data type..
main()
{
	int a,b; // data variable
	
	printf("Enter first Number : ");  // the message to be print when asked for the input from the user..
	scanf("%d",&a);
	
	printf("Enter Secound Number : ");
	scanf("%d", &b); // the scanf stands for the input function in C language used to ask for input from the user. %d shows that the input should be in int format..
	// m percent b or &b helps to import the data to the variable b as it can hold the data which the user inputs.. 
	int sum = a+b;
	printf("Sum of a and b is %d", sum); // modulas d or %d is imporatant as it tells what data type the output should give...
	

}
