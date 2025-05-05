#include<stdio.h>

int main(){
    float Fahrenheit, Centigrade;
    printf("Temperature in Fahrenheit : ");
    scanf("%f", &Fahrenheit);
    Centigrade = (Fahrenheit - 32)/1.8;
    printf("Temarature in Centigrade is : %f", Centigrade);
    return 0;
}