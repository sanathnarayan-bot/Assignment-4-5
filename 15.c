/*

Recursion
A function calls itself to solve a problem
Uses function call stack
Generally slower due to repeated function calls

Iteration
Uses loops (for, while) to repeat steps
Stops when the loop condition becomes false
Uses less memory

*/


#include <stdio.h>

void binary(int n) {
    if (n == 0)
        return;

    binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary = 0");
    } else {
        printf("Binary = ");
        binary(num);
    }

    return 0;
}

