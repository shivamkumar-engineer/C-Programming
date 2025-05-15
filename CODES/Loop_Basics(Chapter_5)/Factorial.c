#include<stdio.h>

int main(){
    int x, i, fact;
    i = fact = 1;
    printf("Enter the number : ");
    scanf("%d", &x);
    // fact = x;
    // while(i <= x-1){
    //     fact = fact*(x-i);
    //     i++;
    // }

    while (i <= x)
    {
        fact *= i;
        i++;
    }
    
    printf("%d", fact);
    return 0;
}