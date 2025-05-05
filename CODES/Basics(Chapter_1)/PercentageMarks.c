#include<stdio.h>

int main(){
    int Eng, hindi, maths, science, sst;
    float agg, percentage;
    printf("Enter marks : ");
    scanf("%d %d %d %d %d", &Eng, &hindi, &maths, &science, &sst);
    agg = (Eng+hindi+maths+science+sst);
    percentage = ((Eng+hindi+maths+science+sst)/500.0)*100;
    printf("The aggregate Marks is : %f\nThe percentage is : %f", agg, percentage);
    return 0;
}