#include<stdio.h>
#include<math.h>

int main(){
    int Xp, Yp, Xc, Yc, radius;
    float Distance;
    printf("(Xc, Yc) : ");
    scanf("%d, %d", &Xc, &Yc);
    printf("Radius : ");
    scanf("%d", &radius);
    printf("(Xp, Yp) : ");
    scanf("%d, %d", &Xp, &Yp);
    Distance = sqrt(pow((Xp-Xc), 2)+pow((Yp-Yc) ,2));
    if(Distance < radius)
        printf("Points inside the circle");
    else if (Distance == radius)
        printf("Point on the circle.");
    else if (Distance > radius)
        printf("Point outside the circle.");
    return 0;
}