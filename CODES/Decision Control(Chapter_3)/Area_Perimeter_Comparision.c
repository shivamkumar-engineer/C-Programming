#include<stdio.h>

int main(){
    float l, b, area, perimeter;
    printf("Length : ");
    scanf("%f", &l);
    printf("Breadth : ");
    scanf("%f", &b);
    area = l*b;
    perimeter = 2*(l+b);
    if(area > perimeter)
        printf("Yes, area is greater than perimeter.");
    else
        printf("No, perimeter is greater than area.");
    return 0;
}