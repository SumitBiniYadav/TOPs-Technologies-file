#include<stdio.h>
int main()
{
	char ch;
	printf("Enter A Character : ");
	scanf("%c", &ch);
	
	if (ch >= 'A' && ch <= 'Z')  // we use relational operator here as every alphabet has its own ASCII value which helps compiler to conver it to integer..
	{
		printf("Upper case");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("Lower case");
	}
	else 
	{
		printf("Invalid Input");
	}
	return 0;
}
