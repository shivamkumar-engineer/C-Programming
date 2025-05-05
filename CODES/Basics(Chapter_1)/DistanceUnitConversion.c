#include<stdio.h>

int main(){
    float distance, meters, feet, inch, centimeter;
    printf("Enter the distance in Kilometer : ");
    scanf("%f", &distance);
    meters = distance*1000;
    feet = distance*3280.84;
    inch = distance*39370.08;
    centimeter = distance*100000.0032;
    printf("Converted distance = %f, %f, %f, %f\n", meters, feet, inch, centimeter);
    return 0;
}