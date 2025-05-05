#include<stdio.h>
int main(){
    int x, y;
    printf("(x, y) : ");
    scanf("%d, %d", &x, &y);
    if(x == 0 && y == 0)
        printf("Lies on the Origin.");
    else if(x == 0)
        printf("Lies on Y-axis.");
    else if (y == 0)
        printf("Lies on X-axis");
    return 0;
}