#include <stdio.h>

int main() {
    int arr[] = {3,5,1,8,2};
    int max = arr[0], min = arr[0];

    for(int i=1;i<5;i++) {
        if(arr[i]>max) max = arr[i];
        if(arr[i]<min) min = arr[i];
    }

    printf("Max=%d Min=%d", max, min);
    return 0;
}
