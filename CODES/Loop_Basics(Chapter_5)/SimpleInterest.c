#include<stdio.h>

int main(){
    int p, r, t;
    float si;
    int count = 1;
    while(count <= 3){
    printf("Principal, Rate, Time : ");
    scanf("%d %d %d", &p, &r, &t);
    si = (p*r*t)/100.0;
    printf("%f\n\n", si);
    count += 1;
    }
    return 0;
}