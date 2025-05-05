#include<stdio.h>

int main(){
    int N;
    printf("Enter the integer : ");
    scanf("%d", &N);
    if(N%2==0)
        printf("It is an even number.");
    else
        printf("It is an odd number.");
}