#include<stdio.h>

int main()
{
    int total = 0;  // Variable to calculate the subtotal of order
    int in;         // Variable to hold input from the menu
    char moreOrders;  // Variable to hold input for further orders (y/n)
    
    // Using do-while loop for asking the input again if the user wants to order more
    do { 
        printf("\n-----------Menu---------------\n");
        printf("\n1. Pizza          price = 200rs/pcs");
        printf("\n2. Dosa           price = 120rs/pcs");
        printf("\n3. Burger         price = 60rs/pcs");
        printf("\n4. Idli           price = 40rs/pcs");
        printf("\n5. Pasta          price = 180rs/pcs");
        
        printf("\nPlease Enter Your Choice : ");
        scanf("%d", &in);  // Stores the input in 'in' variable
        
        // Conditional statements for multiple inputs
        if(in == 1) {
            int n;  // Variable to store input of quantity
            printf("You have selected Pizza");
            printf("\nEnter the quantity : ");  
            scanf("%d", &n);
            printf("\nYou ordered %d Pizza(s), Total: %d rs", n, n * 200);  // Shows ordered quantity and total amount
            total += n * 200;  // Adds the cost to total
        }
        else if(in == 2) {
            int n;
            printf("You have selected Dosa");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Dosa(s), Total: %d rs", n, n * 120);
            total += n * 120;
        }
        else if(in == 3) {
            int n;
            printf("You have selected Burger");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Burger(s), Total: %d rs", n, n * 60);
            total += n * 60;
        }
        else if(in == 4) {
            int n;
            printf("You have selected Idli");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Idli(s), Total: %d rs", n, n * 40);
            total += n * 40;
        }
        else if(in == 5) {
            int n;
            printf("You have selected Pasta");
            printf("\nEnter the quantity : ");
            scanf("%d", &n);
            printf("\nYou ordered %d Pasta(s), Total: %d rs", n, n * 180);
            total += n * 180;
        }
        else {
            printf("INVALID INPUT, TRY AGAIN !!!!");
        }

        // Asking if the user wants to order more
        printf("\nDo you want to order more? (y/n): ");
        scanf(" %c", &moreOrders);  // Taking single character input (y/n)
        
    } while (moreOrders == 'y' || moreOrders == 'Y');  // Continue if user inputs 'y' or 'Y'
    
    // Print final bill
    printf("Your Final Bill is: %d rs", total);
    return 0;
}

