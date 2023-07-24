#include <stdio.h>

int main(void) {
    int n, a, i;
    int arr[10000] = {0, };
    int min = 24;
    scanf_s("%d", &n);
    for(i = 0; i < n; i++) {
        scanf_s("%d", &a);
        arr[i] = a;
    }
    for(i = 0; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }
        printf("%d", min);
        return 0;
}