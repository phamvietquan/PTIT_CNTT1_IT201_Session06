#include<stdio.h>

void thapHanoi(int n, char A, char B, char C) {
    if (n==0) {
        printf("Input khong hop le\n");
        return;
    }
    if (n==1) {
        printf("Input khong hop le\n");
        return;
    }
    thapHanoi(n-1, A, C, B);
    printf("Dia %d di chuyen tu %c sang %c\n", n, A, C);
    thapHanoi(n-1, B, C, A);
}


int main() {
int n;
    printf("Nhap so dia: ");
    scanf("%d", &n);

    if (n<=0) {
        printf("input khong hop le\n");
    }else {
        thapHanoi(n, 'A', 'B', 'C');
    }
    return 0;
}
