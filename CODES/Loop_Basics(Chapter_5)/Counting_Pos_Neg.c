#include<stdio.h>

int main(){
    int x, i = 0, count_pos = 0, count_neg = 0, count_0 = 0, n;
    printf("How many : ");
    scanf("%d", &n);
    while(i <= n){
        printf("Enter Number : ");
        scanf("%d", &x);
        if(x > 0)
            count_pos++;
        else if(x < 0)
            count_neg++;
        else
            count_0++;
        i++;
    }
    printf("Positive = %d\nNegative = %d\nZero = %d", count_pos, count_neg, count_0);
    return 0;
}