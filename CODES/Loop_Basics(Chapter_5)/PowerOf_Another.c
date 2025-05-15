#include<stdio.h>

int main(){
    int y, i;
    float x, power;
    i = 1;
    power = 1;
    printf("value of X and Y : ");
    scanf("%f %d", &x, &y);
    while(i <= y){
        power *= x;
        i++;
    }
    printf("%f to the power %d is %f\n", x, y, power);
    return 0;
}