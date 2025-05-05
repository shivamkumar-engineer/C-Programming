#include<stdio.h>

int main(){
    int num, d1, d2, d3, d4, d5, reversed_Number1, reversed_Number2;
    printf("Enter the 5-digit number : ");
    scanf("%d", &num);

    // Approach 1

    d1 = (num/10000);
    d2 = (num/1000)-(d1*10);
    d3 = (num/100)-(d1*100+d2*10);
    d4 = (num/10)-(d1*1000+d2*100+d3*10);
    d5 = (num)-(d1*10000+d2*1000+d3*100+d4*10);
    reversed_Number1 = (d5*10000+d4*1000+d3*100+d2*10+d1);
    printf("Reversed Number1 = %d\n", reversed_Number1);

    // Approach 2 
    
    d5 = num%10;    num = num/10;
    d4 = num%10;    num = num/10;
    d3 = num%10;    num = num/10;
    d2 = num%10;    num = num/10;
    d1 = num%10;    num = num/10;
    reversed_Number2 = (d5*10000+d4*1000+d3*100+d2*10+d1);
    printf("Reversed Number2 = %d", reversed_Number2);
    return 0;
}