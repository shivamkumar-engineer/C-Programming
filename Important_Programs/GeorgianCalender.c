#include<stdio.h>
#include<math.h>

int main(){
    int Y, day, val;
    printf("Year : ");
    scanf("%d", &Y);
    val = (Y+ (Y - 1)/4 - (Y - 1)/100 + (Y - 1)/400 + 6);
    if(val % 7 == 0)
        printf("Monday");
    else if(val % 7 == 1)
        printf("Tuesday");
    else if(val % 7 == 2)
        printf("Wednesday");
    else if(val % 7 == 3)
        printf("Thursday");
    else if(val % 7 == 4)
        printf("Friday");
    else if(val % 7 == 5)
        printf("Saturday");
    else if(val % 7 == 6)
        printf("Sunday");
    return 0;
}