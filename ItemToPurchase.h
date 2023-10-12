#ifndef ITEMTOPURCHASE_H
#define ITEMTOPURCHASE_H


// struct definition
typedef struct {
    char itemName[999];
    double itemPrice;
    int itemQuantity;
} ItemToPurchase;


//related functions

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(const ItemToPurchase* item);


#endif