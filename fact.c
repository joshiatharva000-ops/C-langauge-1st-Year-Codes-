#include <stdio.h>
int main()
 {
    int n, i;
    int fact = 1;   // variable to store factorial

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } 
    else 
    {
        for (i = 1; i <= n; i++) {
            fact = fact * i;   //multiplying i to factorial
        }
        printf("Factorial of %d = %d\n", n, fact); //n is for the lest %d fact for the last %d
    }

    return 0;
}
