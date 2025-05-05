#include<stdio.h>
#include<math.h>

int main(){
    float x, T1, T2, T3;
    printf("Enter the value of the angle : ");
    scanf("%f", &x);
    x = x/180*3.14;
    T1 = sin(x);
    T2 = cos(x);
    T3 = tan(x);
    printf("Values are : %f, %f, %f", T1, T2, T3);
    return 0;
}