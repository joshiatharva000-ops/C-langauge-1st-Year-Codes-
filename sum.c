#include <stdio.h>

int main() {
    int i, sum;

    for(i = 1; i <= 10; i++) {
        sum = sum + i; // adds each number to sum
    }

    printf("Sum of numbers from 1 to 10 = %d\n", sum);

    return 0;
}