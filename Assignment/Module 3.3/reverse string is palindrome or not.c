#include<stdio.h>
//function to conver string to reverse !!
revstr(char *s)
{          
	if (*s != '\0')   //base case : If we reach the null character, stop recursion !!!! 
	{      
		revstr(s+1);  //recursive call the next character !!!!
		   
		printf("%c", *s); //print the current character after 	returning from the recursion !!!!
	}
}
//function to check weather the string is palindrome or not !!
int isPalind(char *s)
{
	int len = strlen(s); //get the length of the string !!!
	int i;
	for(i =0;i<len/2;i++ ) //loop from the start to the middle of the string !!!
	{	
		if(s[i] != s[len - i - 1]) //compare the i-th character from the start with the i-th from the end
			return 0;    //not a palindrome !!!
	}
	return 1; //is a palindrome !!!
}
main()
{
	char s[100];        
	
	printf("Enter your string : ");
	gets(s);
	//prints the string in reverse !!
	printf("The reverse sting is :");
	revstr(s);          
	
	//checks is the original string is a palindrome or not !!
	if(isPalind(s))
	{
	printf("\nThe string is Palindrome. \n");
 	}
	else
	{
		printf("\nThe string is not Palindrome. \n");
	}
}
