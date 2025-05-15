#include<stdio.h>

int main(){
    int decimal, octal = 0, place = 1, temp, remainder;
    printf("Number : ");
    scanf("%d", &decimal);
    temp = decimal;

    if(temp == 0){
        printf("Octal --> 0");
    }
    else{
        while(temp > 0){
            remainder = temp % 8;
            octal = octal+remainder*place;
            place = place*10;
            temp  = temp/8;
        }
        printf("Octal Equivalent --> %d", octal);
    }

    return 0;
}