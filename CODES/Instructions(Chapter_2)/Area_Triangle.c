#include<stdio.h>
#include<math.h>

int main(){
    float a, s1, s2, s3, area;
    printf("Enter the sides of the triangle : ");
    scanf("%f %f %f", &s1, &s2, &s3);
    a = (s1+s2+s3)/2;
    area = sqrt(a*(a-s1)*(a-s2)*(a-s3));
    printf("The area is : %f", area);
    return 0;
}