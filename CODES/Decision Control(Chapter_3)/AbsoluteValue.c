#include<stdio.h>
int main(){
    int N, absolute;
    printf("Enter the number : ");
    scanf("%d", &N);
    if(N < 0)
    N = -N;
    printf("Value = %d", N);
    return 0;
}