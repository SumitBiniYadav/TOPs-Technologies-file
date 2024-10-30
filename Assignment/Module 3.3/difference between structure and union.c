#include <stdio.h>

struct AsscArray{
	int a[4];  // Array to store numbers for ascending order sorting
	int i, j, temp;  // Variables for loop counters and swapping
} s1;

union DescArray{
	int a[4];  // Array to store numbers for descending order sorting
	int i, j, temp;  // Variables for loop counters and swapping
} s6;

main()
{
	// Ascending Order using Structure
	printf("Ascending order using Structure:\n");
	for(s1.i = 0; s1.i < 4; s1.i++) {
		printf("Enter a number: ");
		scanf("%d", &s1.a[s1.i]);  // Take input for the array in structure
	}

	// Sort the array in ascending order
	for(s1.i = 0; s1.i < 4; s1.i++) {
		for(s1.j = s1.i + 1; s1.j < 4; s1.j++) {
			if(s1.a[s1.i] > s1.a[s1.j]) {  // Swap if the previous element is greater
				s1.temp = s1.a[s1.i];
				s1.a[s1.i] = s1.a[s1.j];
				s1.a[s1.j] = s1.temp;
			}
		}
	}

	// Display the array in ascending order
	printf("Sorted Array in Ascending Order:\n");
	for(s1.i = 0; s1.i < 4; s1.i++) {
		printf("%d ", s1.a[s1.i]);
	}
	printf("\n");

	// Descending Order using Union
	printf("Descending order using Union:\n");
	for(s6.i = 0; s6.i < 4; s6.i++) {
		printf("Enter a number: ");
		scanf("%d", &s6.a[s6.i]);  // Take input for the array in union
	}

	// Sort the array in descending order
	for(s6.i = 0; s6.i < 4; s6.i++) {
		for(s6.j = s6.i + 1; s6.j < 4; s6.j++) {
			if(s6.a[s6.i] < s6.a[s6.j]) {  // Swap if the next element is greater
				s6.temp = s6.a[s6.i];
				s6.a[s6.i] = s6.a[s6.j];
				s6.a[s6.j] = s6.temp;
			}
		}
	}

	// Display the array in descending order
	printf("Sorted Array in Descending Order:\n");
	for(s6.i = 0; s6.i < 4; s6.i++) {
		printf("%d ", s6.a[s6.i]);
	}
	printf("\n");

}

