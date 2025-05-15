#include <stdio.h>

int main() {
    int num = 1;

    while (num <= 500) {
        int temp = num, sum = 0, digits = 0, original = num;

        // Count the number of digits
        int count = temp;
        while (count != 0) {
            digits++;
            count /= 10;
        }

        temp = num;

        // Compute sum of digits raised to the power of number of digits
        while (temp != 0) {
            int digit = temp % 10;
            int power = 1;
            int i = 0;

            while (i < digits) {
                power *= digit;
                i++;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == original) {
            printf("%d\n", original);
        }

        num++;
    }

    return 0;
}