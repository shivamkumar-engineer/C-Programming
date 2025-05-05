#include<stdio.h>
#include<math.h>

int main(){
    int L1, L2, G1, G2;
    float Distance;
    printf("Enter the values of Latitude(L1, L2) : ");
    scanf("%d, %d", &L1, &L2);
    printf("Enter the Longitudes(G1, G2) : ");
    scanf("%d, %d", &G1, &G2);
    Distance = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("Distance = %f", Distance);
    return 0;
}