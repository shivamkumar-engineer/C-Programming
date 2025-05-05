#include<stdio.h>

int main(){
    float basic_sal, gross_sal, hra, da;
    printf("Enter the Salary : ");
    scanf("%f", &basic_sal);
    if(basic_sal < 1500){
        hra = 0.1*basic_sal;
        da = 0.9*basic_sal;
    }
    else if (basic_sal >= 1500){
        hra = 500;
        da = 0.98*basic_sal;
    }

    gross_sal = basic_sal + hra + da;
    printf("Gross Salary = %f", gross_sal);
    return 0;
}