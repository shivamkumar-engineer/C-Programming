#include<stdio.h>
int main(){
    int s1, s2, s3, largest, sum;
    printf("Side 1 : ");
    scanf("%d" ,&s1);
    printf("Side 2 : ");
    scanf("%d" ,&s2);
    printf("Side 3 : ");
    scanf("%d" ,&s3);
    if(s1 > s2){
        if(s1 > s3){
            sum = s2 + s3;
            largest = s1;
        }
        else{
            sum = s1 + s2;
            largest = s3;
        }
    }
    else{
        if(s2 > s3){
            sum = s1 + s3;
            largest = s2;
        }
        else{
            sum = s1 + s2;
            largest = s3;
        }
    }

    if(sum > largest){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
}