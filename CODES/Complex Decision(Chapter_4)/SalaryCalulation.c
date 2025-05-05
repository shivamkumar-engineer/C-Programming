#include<stdio.h>

int main(){
    int YOS, sal = 0, qualify;
    char sex;
    printf("Sex(M, F) : ");
    scanf("%c", &sex);
    printf("Years of Service : ");
    scanf("%d", &YOS);
    printf("Qualification(0, 1) : ");
    scanf("%d", &qualify);

    if(sex == 'M' && YOS >= 10 && qualify == 1)
        sal = 11000;
    else if((sex == 'M' && YOS >= 10 && qualify == 0) || (sex == 'M' && YOS < 10 && qualify == '1'))
        sal = 10000;
    else if(sex == 'M' && YOS < 10 && qualify == 0)
        sal = 7000;

    else if(sex == 'F' && YOS < 10 && qualify == 1)
        sal = 12000;
    else if(sex == 'F' && YOS < 10 && qualify == 0)
        sal = 9000;
    else if(sex == 'F' && YOS < 10 && qualify == 1)
        sal = 10000;
    else if(sex == 'F' && YOS < 10 && qualify == 0)
        sal = 6000;

    printf("\nSalary of the Employee = %d\n", sal);
    
    return 0;
}