#include<stdio.h>
int main(){
    int Ram, Shyam, Ajay;
    printf("Age of Ram : ");
    scanf("%d", &Ram);
    printf("Age of Shyam : ");
    scanf("%d", &Shyam);
    printf("Age of Ajay : ");
    scanf("%d", &Ajay);

    if(Ram < Shyam){
        if(Ram < Ajay){
            printf("Ram is the youngest.");
        }
        else
            printf("Ajay is the youngest.");
    }
    else{
        if(Shyam < Ajay){
            printf("Shyam is the youngest.");
        }
        else
            printf("Ajay is the youngest.");
    }
    return 0;
}