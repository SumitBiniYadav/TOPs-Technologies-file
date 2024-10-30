#include<stdio.h>
//recursive function to print the string in reverse !!!!
revstr(char *s)
{          //base case : If we reach the null character, stop recursion !!!! 
	if (*s != '\0')
	{      //recursive call the next character !!!!
		revstr(s+1);
		   //print the current character after 	returning from the recursion !!!!
		printf("%c", *s);
	}
}

main()
{
	char s[100];        //string decleration !!!!
	
	printf("Enter your string : ");
	gets(s);
	
	revstr(s);          //calls the recursive functions to print the string in reverse !!!! 
}
