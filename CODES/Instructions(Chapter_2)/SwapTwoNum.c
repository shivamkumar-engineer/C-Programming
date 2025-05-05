#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    printf("Enter the values of 'a' ,'b' : ");
    scanf("%d, %d", &a, &b);

    // Approach 1 --> Using 3rd variable

    // c = a;
    // a = b;
    // b = c;
    // printf("Values after swapping(3rd Variable) : a = %d, b = %d\n", a, b);

    // Approach 2 --> Using Arithmetic Operations

    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("Values after swapping(Arithmetic): a = %d, b = %d", a, b);

    // Approach 3 --> Using XOR

    a = a^b;
    b = a^b;
    a = a^b;
    printf("Values after swapping(XOR) : a = %d, b = %d", a, b);
    return 0;
}