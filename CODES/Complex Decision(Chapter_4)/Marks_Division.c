#include<stdio.h>

int main(){
    int Eng, hindi, maths, science, sst;
    float agg, percentage;
    printf("Enter marks : ");
    scanf("%d %d %d %d %d", &Eng, &hindi, &maths, &science, &sst);
    agg = (Eng+hindi+maths+science+sst);
    percentage = ((Eng+hindi+maths+science+sst)/500.0)*100;
    if(percentage >= 60)
        printf("First Division");
    else if(percentage >= 50 && percentage <= 59)
        printf("Second Division");
    else if(percentage >= 40 && percentage <= 49)
        printf("Second Division");
    else if(percentage < 40)
        printf("Fail");
    return 0;
}