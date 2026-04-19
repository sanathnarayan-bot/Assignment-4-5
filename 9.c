#include <stdio.h>

int main() {
    int arr[5] = {1,2,2,3,2};
    int num = 2, count = 0;

    for(int i=0;i<5;i++)
        if(arr[i]==num)
            count++;

    printf("Count = %d", count);
    return 0;
}
