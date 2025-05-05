#include<stdio.h>
int main(){
    int N, d1, d2, d3, d4, d5, reversed;
    printf("Enter the number : ");
    scanf("%d", &N);
    d5 = N%10;      N /= 10;
    d4 = N%10;      N /= 10;
    d3 = N%10;      N /= 10;
    d2 = N%10;      N /= 10;
    d1 = N%10;      N /= 10;

    reversed = d5*10000 + d4*1000 + d3*100 + d2*10 + d1;
    printf("Reversed Number = %d\n", reversed);

    if(N == reversed){
        printf("They are equal.");
    }
    else 
        printf("They are not equal.");
    return 0;
}