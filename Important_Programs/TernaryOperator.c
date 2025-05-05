#include<stdio.h>

int main(){
    int x, y, z ,g;
    printf("x : ");
    scanf("%d", &x);
    printf("y : ");
    scanf("%d", &y);
    printf("z : ");
    scanf("%d", &z);

    // z = (x<y?100:200);
    // printf("%d", z);

    // (x>y?printf("Shivam is the king!"):printf("Raja is the king!"));

    // (x>y && y>z?printf("I will win!"):printf("I will surely win!"));

    int   big, a, b, c ; 
    big = ( x > y ? ( x > z ? 3: 4 ) : ( y > z ? 6: 8 ) ) ; 
    printf("%d", big);
    a > b ? g = a : g = b ;
    return 0;
}