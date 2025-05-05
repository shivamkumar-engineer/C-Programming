#include<stdio.h>

int main(){
    int quantity;
    float price, total_Expense, discount;
    printf("Enter the Quantity needed : ");
    scanf("%d", &quantity);
    printf("Enter the price per item : ");
    scanf("%f", &price);
    if(quantity > 1000){
        discount = ((price*quantity)/100)*10;
        float total = (price*quantity) - discount;
        printf("Total Expense after discount = %f", total);
    }
    else{
        total_Expense = price*quantity;
        printf("The Expense without discount = %f", total_Expense);
    }
    return 0;
}