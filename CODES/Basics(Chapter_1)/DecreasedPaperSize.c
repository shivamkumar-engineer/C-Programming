#include<stdio.h>

int main(){
    int A0, A1, A2, A3, A4, A5, A6, A7, A8;
    int l0 = 1189.0, l1, l2, l3, l4, l5, l6, l7, l8;
    int b0 = 841.0, b1, b2, b3, b4, b5, b6, b7, b8;
    l1 = b0;     b1 = l0/2; 
    l2 = b1;     b2 = l1/2;
    l3 = b2;     b3 = l2/2;
    l4 = b3;     b4 = l3/2;
    l5 = b4;     b5 = l4/2;
    l6 = b5;     b6 = l5/2;
    l7 = b6;     b7 = l6/2;
    l8 = b7;     b8 = l7/2;


    printf("Size of A0 = %d mm x %d mm\n", l0, b0);
    printf("Size of A1 = %d mm x %d mm\n", l1, b1);
    printf("Size of A2 = %d mm x %d mm\n", l2, b2);
    printf("Size of A3 = %d mm x %d mm\n", l3, b3);
    printf("Size of A4 = %d mm x %d mm\n", l4, b4);
    printf("Size of A5 = %d mm x %d mm\n", l5, b5);
    printf("Size of A6 = %d mm x %d mm\n", l6, b6);
    printf("Size of A7 = %d mm x %d mm\n", l7, b7);
    printf("Size of A8 = %d mm x %d mm\n", l8, b8);
    return 0;
}