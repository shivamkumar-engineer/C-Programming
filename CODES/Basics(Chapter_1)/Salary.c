#include<stdio.h>

int main(){
    int basic;
    float allowance, rent, gross;
    printf("Enter the Basic Salary : ");
    scanf("%d", &basic);
    allowance = 0.4*basic;
    rent = 0.2*basic;
    gross = basic + allowance + rent;
    printf("The Dearness allowance is : %f\n", allowance);
    printf("The House Rent is : %f\n", rent);
    printf("The gross salary is : %f\n", gross);
    return 0;
}