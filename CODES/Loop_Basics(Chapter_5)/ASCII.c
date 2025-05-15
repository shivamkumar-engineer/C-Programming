#include<stdio.h>

int main(){
    char ch;
    int v, i = 0;
    while(i <= 255){
        ch = i;
        printf("%c --> %d\n",ch, i);
        i++;
    }
    return 0;
}