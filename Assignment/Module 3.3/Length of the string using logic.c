#include<stdio.h>

main()
{
	char a[10];                               // Declare a character array to store the name input !!!
	
	printf("Enter Name : ");
	gets(a);
	
	int i, len=0;                            // Initialize index `i` and `len` to count the length of the string !!!
	for (i=0;a[i]!='\0'; i++)                // Loop through each character of the array until the null terminator is encountered !!!
	{
		len++;                              // Increment length counter for each character !!!
	}
	printf("%d", len);                      // Print the length of the string !!!
}
