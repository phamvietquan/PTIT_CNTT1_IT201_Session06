#include<stdio.h>

void thapHanoi(int n, char A, char B, char C) {
    if (n==1) {
        printf("dia 1 di chuyen tu %c sang %c\n",A,C);
        return;
    }
    thapHanoi(n-1, A, C, B);
    printf("Dia %d di chuyen tu %c sang %c\n", n, A, C);
    thapHanoi(n-1, B, A, C);
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
