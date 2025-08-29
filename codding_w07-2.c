#include <stdio.h>

int main() {
    int x, y;

    // รับค่าจากผู้ใช้
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    // เปรียบเทียบค่า
    if (x > y) {
        printf("x is greater than y\n");
    } else if (x < y) {
        printf("x is less than y\n");
    } else {
        printf("x is equal to y\n");
    }

    return 0;
}