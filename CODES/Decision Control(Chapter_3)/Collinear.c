#include<stdio.h>

int main(){
    int x1, x2, x3, y1, y2, y3, S_AB, S_BC;
    printf("(x1, y1) : ");
    scanf("%d, %d", &x1, &y1);
    printf("(x2, y2) : ");
    scanf("%d, %d", &x2, &y2);
    printf("(x3, y3) : ");
    scanf("%d, %d", &x3, &y3);
    S_AB = (y2-y1)/(x2-x1);
    S_BC = (y3-y2)/(x3-x2);
    if(S_AB == S_BC)
        printf("Points lie on same line.");
    else
        printf("Points doesn't lie on the same line.");
    return 0;
}