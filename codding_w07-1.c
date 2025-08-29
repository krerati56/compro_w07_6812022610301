#include <stdio.h>  // เรียกใช้ไลบรารีมาตรฐานสำหรับ input/output

int main() {
    float score; // ตัวแปรสำหรับเก็บคะแนนสอบที่ผู้ใช้กรอก
    float total ; // ตัวแปรสำหรับเก็บคะแนนรวม (หลังคำนวณเพิ่มพิเศษ ถ้ามี)

    // รับคะแนนสอบ midterm
    printf("Enter your midterm score: ");
    scanf("%f", &score);

    // ตรวจสอบว่าคะแนน >= 50 และเพิ่ม 5%
    if (score >= 50) {
       total = score = score + (score * 0.05); // เพิ่ม 5% ให้กับคะแนน
    } else {
        total = score; // ถ้าคะแนน < 50 ไม่เพิ่มคะแนน
    }

    // แสดงผลคะแนนรวม
    printf("total score: %.2f\n", total);

    // จบการประเมินผล
    printf("End of evaluation\n");

    return 0;
}
