#include <stdio.h>
int main() {
    int lavel;// เก็บระดับ
    printf("Enter your lavel:1-4 "); // รับค่าระดับจากผู้ใช้
    scanf("%d", &lavel); // อ่านค่าระดับที่ผู้ใช้ป้อน
    switch (lavel)   // ตรวจสอบค่าระดับ
    {
    case 1:
        printf("silver\n"); // กรณีที่ระดับเป็น 1
        break;
    case 2:
        printf("gold\n"); // กรณีที่ระดับเป็น 2
        break;
    case 3:
        printf("platinum\n"); // กรณีที่ระดับเป็น 3
        break;
    case 4:
        printf("diamond\n"); // กรณีที่ระดับเป็น 4
        break;
    default:
        break;
    }
   if (lavel == 1) {
        printf("5%% discount\n"); // กรณีที่ระดับเป็น 1
    }
    else if (lavel == 2) {
        printf("10%% discount + reward points\n"); // กรณีที่ระดับเป็น 2
    }
    else if (lavel == 3) {
        printf("15%% discount + reward points + birthday gift\n"); // กรณีที่ระดับเป็น 3
    }
    else if (lavel == 4) {
        printf(" Got everything + Vip events\n"); // กรณีที่ระดับเป็น 4
    }
    else if (lavel < 1 || lavel > 4) {
        printf("invalid membership level\n"); // กรณีที่ไม่ตรงกับเงื่อนไขใดๆ
    } // ความแตกต่างของ if กับ switch สามารถตวจสอบเงื่อนไขที่ซับซ้อนได้มากกว่า

    return 0;
}