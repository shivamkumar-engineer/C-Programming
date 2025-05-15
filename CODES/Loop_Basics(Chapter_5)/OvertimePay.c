#include<stdio.h>

int main(){
    int hour, i = 0;
    float ot;
    while(i<=10){
        printf("Working Hours : ");
        scanf("%d", &hour);
        if(hour >= 40){
            ot = (hour - 40)*120;
        }
        else
            ot = 0;
        printf("Pay Received = %f\n\n", ot);
        i += 1;
        }
    return 0;
}