#include<stdio.h>


int fibonaci(int n) {
    if (n==0)return 0;
    if (n==1)return 1;
    return fibonaci(n-1)+fibonaci(n-2);
}
void fibonaciReverse(int n) {
    if (n<=0) return ;
        printf("%d",fibonaci(n));
    if (n-1!=0) printf(", ");
        fibonaciReverse(n-1);

}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number<=0) {
        printf("Khong hop le");
    }
    fibonaciReverse(number);

    return 0;
}
