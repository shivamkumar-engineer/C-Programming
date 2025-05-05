#include<stdio.h>
#include<math.h>

int main(){
    int x, y, r, xi;
    printf("Enter the Cartesian Co-ordinates(x,y) : ");
    scanf("%d, %d", &x, &y);
    r = sqrt(x*x + y*y);
    xi = atan2(y,x);
    xi = xi*180/3.14;
    printf("The Polar Co-ordinates are : (%d, %d)", r, xi);
    return 0;
}