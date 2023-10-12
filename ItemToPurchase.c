#include <stdio.h>
#include <string.h>
#include <math.h>
#include "ItemToPurchase.h"

//related function definitions

void MakeItemBlank(ItemToPurchase* item) {
    strcpy(item->itemName, "none");
    item->itemPrice = 0;
    item->itemQuantity = 0;
}


void PrintItemCost(const ItemToPurchase* item) {
    double calc;
    calc = (item->itemPrice) * (item->itemQuantity);
    printf("%s %d @ $%.0lf = $%.0lf\n", item->itemName, item->itemQuantity, item->itemPrice, calc);

    
}