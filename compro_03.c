#include <stdio.h>
int main() {
   int lavel; // ตัวแปรเก็บระดับ
    printf("Enter your lavel: 1-4 "); // รับค่าระดับจากผู้ใช้
    scanf("%d", &lavel);
    switch (lavel) {//  ตรวจสอบค่าระดับ
         case 1:
              printf("beginner\n"); // กรณีที่ระดับเป็น 1
              
         case 2:
              printf("intermediate\n"); // กรณีที่ระดับเป็น 2
              break;
         case 3:
              printf("advanced\n"); // กรณีที่ระดับเป็น 3
              break;
         case 4:
              printf("Expert\n"); // กรณีที่ระดับเป็น 4
              break;
         
         default:
              printf("invalid level\n"); // กรณีที่ไม่ตรงกับเงื่อนไขใดๆ
              break; //break ทำงานภายใน case ส่วน default ทำงานเมื่อไม่มี case ใดๆ ตรงกับเงื่อนไข
    }
   return 0;
}