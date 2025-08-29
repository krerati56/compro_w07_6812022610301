#include <stdio.h>

int main() {
    int level;

    printf("Enter your level: ");
    scanf("%d", &level);

    // ตรวจสอบว่าอยู่ในช่วงที่อนุญาต
    if (level <= 0) {
        printf("The level below 1 is not allowed\n");
    } else if (level > 4) {
        printf("The level above 4 is not allowed\n");
    } else {
        // switch ตรวจสอบระดับ
        switch(level) {
            case 1:
                printf("Beginner\n");
                break;
            case 2:
                printf("Intermediate\n");
                break;
            case 3:
                printf("Advanced\n");
                break;
            case 4:
                printf("Expert\n");
                break;
            default:
                printf("Invalid level\n");
        }
    }

    return 0;
}