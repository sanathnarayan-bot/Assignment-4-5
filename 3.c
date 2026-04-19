#include <stdio.h>

void printEven(int start, int end) {
    if (start > end) return;
    if (start % 2 == 0)
        printf("%d ", start);
    printEven(start + 1, end);
}

int main() {
    printEven(1, 20);
    return 0;
}
