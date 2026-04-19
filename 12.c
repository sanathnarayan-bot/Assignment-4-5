#include <stdio.h>

struct customer {
    int acc;
    char name[50];
    float balance;
};

int main() {
    struct customer c[150];
    int n;

    scanf("%d", &n);

    for(int i=0;i<n;i++) {
        scanf("%d %s %f", &c[i].acc, c[i].name, &c[i].balance);
    }

    for(int i=0;i<n;i++) {
        if(c[i].balance < 100)
            printf("%d %s\n", c[i].acc, c[i].name);
    }

    return 0;
}
