#include<stdio.h>

int main(){
    char ch;
    int v;
    printf("Enter the character : ");
    scanf("%c", &ch);
    
    // v = ch;
    // printf("%d", v);

    if(ch >= 65 && ch <= 90)
        printf("Capital Letters!");
    if(ch >= 97 && ch <= 122)
        printf("Small Letters!");
    if(ch >= 48 && ch <= 57)
        printf("Numbers");
    if(ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
        printf("Special symbols");

    return 0;
}