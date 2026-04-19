#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Cube = %d", cube(num));
    return 0;
}
