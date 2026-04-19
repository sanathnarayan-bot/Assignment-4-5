#include <stdio.h>

// Recursive function
int sumRecursive(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumRecursive(n / 10);
}

// Non recursive function
int sumIterative(int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return sum;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits (Recursive) = %d\n", sumRecursive(num));
    printf("Sum of digits (Iterative) = %d\n", sumIterative(num));

    return 0;
}
