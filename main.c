#include <stdio.h>
#include <string.h>
#include <math.h>
#include "ItemToPurchase.h"

int main() {
    ItemToPurchase item1;
    ItemToPurchase item2;

    while (1) {
        MakeItemBlank(&item1);
        MakeItemBlank(&item2);

        printf("Item 1\nEnter the item name (or 'quit' to exit):\n");
        fgets(item1.itemName, 999, stdin);

        // Remove the newline character from item1.itemName
        item1.itemName[strcspn(item1.itemName, "\n")] = '\0';

        // Check if the user wants to quit
        if (strcmp(item1.itemName, "quit") == 0) {
            break;
        }

        printf("Enter the item price:\n");
        scanf("%lf", &item1.itemPrice);

        printf("Enter the item quantity:\n");
        scanf("%d", &item1.itemQuantity);

        // Clear the input buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        // 2nd
        printf("\nItem 2\nEnter the item name (or 'quit' to exit):\n");
        fgets(item2.itemName, 999, stdin);

        // Remove the newline character from item2.itemName
        item2.itemName[strcspn(item2.itemName, "\n")] = '\0';

        // Check if the user wants to quit
        if (strcmp(item2.itemName, "quit") == 0) {
            break;
        }

        printf("Enter the item price:\n");
        scanf("%lf", &item2.itemPrice);

        printf("Enter the item quantity:\n");
        scanf("%d", &item2.itemQuantity);

        // Clear the input buffer
        while ((c = getchar()) != '\n' && c != EOF);

        // add costs together and output total cost

        printf("\nTOTAL COST\n");

        double sumItem1 = item1.itemPrice * item1.itemQuantity;
        double sumItem2 = item2.itemPrice * item2.itemQuantity;
        double sumTotal = sumItem1 + sumItem2;

        PrintItemCost(&item1);
        PrintItemCost(&item2);
        printf("\n");
        printf("\nTotal: $%.0lf\n", sumTotal);
    }

    return 0;
}
