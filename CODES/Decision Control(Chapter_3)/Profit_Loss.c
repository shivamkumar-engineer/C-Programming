#include<stdio.h>
int main(){
    float cp, sp;
    float  profit, loss, pro_percent, Loss_percent;
    printf("Cost Price : ");
    scanf("%f", &cp);
    printf("Selling Price : ");
    scanf("%f", &sp);
    if(sp > cp){
        profit = (sp - cp)/cp;
        pro_percent = profit*100.0;
        printf("Profit Incurred(percent) = %f", pro_percent);
    }
    else if (cp > sp){
        loss = (cp - sp)/cp;
        Loss_percent = loss*100.0;
        printf("Loss Incurred(percent) = %f", Loss_percent);
    }
    return 0;
}