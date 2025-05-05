#include<stdio.h>

int main(){
    int age;
    char M_status, sex;

    printf("Marital Status, choose from(m, u) : ");
    scanf(" %c", &M_status);

    printf("Sex, choose from(M, F) : ");
    scanf(" %c", &sex);

    printf("Age : ");
    scanf("%d", &age);

    if((M_status == 'm') || (M_status == 'u' && sex == 'M') && (age > 30 || M_status == 'u' && sex == 'F' && age > 25))
        printf("Insured!");
    else 
        printf("Not Insured!");
    return 0;
}