#include<stdio.h>

int main(){
    float len, breadth, radius, area_rectangle, area_Circle, perimeter, circumference;
    printf("Enter the length, breadth, radius : ");
    scanf("%f %f %f", &len, &breadth, &radius);
    area_rectangle = len*breadth;
    area_Circle = 3.14*radius*radius;
    perimeter = 2*(len+breadth);
    circumference = 2*3.14*radius;
    printf("Area of Rectangle = %f\nPerimeter = %f\nArea of Circle = %f\nCircumference = %f", area_rectangle, perimeter, area_Circle, circumference);
    return 0;
}