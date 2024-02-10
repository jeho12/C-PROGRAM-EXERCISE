#include<stdio.h> 

int main() { 
    int invent_stk, order_qty, new_qty; 
    printf("Enter the stock in inventory: "); 
    scanf("%d", &invent_stk); 
    printf("Enter the quantity ordered: "); 
    scanf("%d", &order_qty); 

    if (order_qty > invent_stk) { 
        printf("Out of Stock"); 
    } 
    else { 
        new_qty = invent_stk - order_qty; 
        printf("The new quantity in stock is %d", new_qty); 
    } 
    return 0; 
}

