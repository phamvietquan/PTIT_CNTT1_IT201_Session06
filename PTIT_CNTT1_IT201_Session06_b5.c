#include <stdio.h>
#include <stdlib.h>

int findMin(int *arr, int n) {
    if (n==1) return arr[0];
    int min = findMin(arr, n-1);
    return (arr[n-1]<min)?arr[n-1] : min;
}


int findMax(int *arr, int n) {
    if (n==1) return arr[0];
    int max = findMax(arr, n-1);
    return (arr[n-1]>max)?arr[n-1] : max;
}
int main() {
    int n;
    int *arr;
    do {
        printf("Please enter a number: ");
        scanf("%d", &n);
        if (n < 0|| n > 100) {
            printf("Please enter a number between 0 and 100\n");
        }
    } while (n < 0||n > 100);
    arr=(int *)malloc(n*(sizeof(int)));
    if (arr==NULL) {
        printf("Memory allocation error\n");
        free(arr);
        return 1;
    }
    printf("Nhap cac phan tu trong mang\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Min = %d\n", findMin(arr, n));
    printf("Max = %d\n", findMax(arr, n));
    free(arr);
    return 0;
}
