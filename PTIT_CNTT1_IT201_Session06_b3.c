#include<stdio.h>



int sum(int n) {
    if (n==0)return 0;
    return n % 10 + sum(n / 10);

}

int main() {
    int n;
    printf("Nhap so nguyen bat ky");
    scanf("%d", &n);
    if (n==0) {
        printf("Khong hop le");
    }
    sum(n);
    printf("%d", sum(n));
    return 0;
}
