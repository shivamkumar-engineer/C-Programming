#include<stdio.h>

int main(){
    int N, R_1, R_2, R_5, R_10, R_50, R_100, Total;
    printf("Enter the Total Money : Rs. ");
    scanf("%d", &N);
    R_100 = N/100;      N = N%100;
    R_50 = N/50;        N = N%50;
    R_10 = N/10;        N = N%10;
    R_5 = N/5;          N = N%5;
    R_2 = N/2;          N = N%2;
    R_1 = N/1;          N = N%1;

    Total = R_100+R_50+R_10+R_5+R_2+R_1;
    printf("Number of Denominations = %d", Total);
    return 0;
}