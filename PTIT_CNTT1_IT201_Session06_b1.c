#include<stdio.h>


int printbinary(int n) {
    if (n==0)return 0;
    printbinary(n/2);
    printf("%d",n % 2);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number==0) {
    printf("0");
    }else {
        printbinary(number);
    }

    return 0;
}
