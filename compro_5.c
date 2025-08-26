#include <stdio.h>

// คำนวณส่วนลด
float calculate_discount(int age, int vip_level, float purchase_amount) {
    float discount_rate = 0.0;

    //  อายุมากกว่า 60 ปี หรือ VIP ระดับ 3, 4
    if (age > 60 || (vip_level == 3 || vip_level == 4)) {
        discount_rate = 0.20;
    }
    //  อายุ 30-40 ปี และยอดซื้อเกิน 2,000 บาท
    else if (age >= 30 && age <= 40 && purchase_amount > 2000) {
        discount_rate = 0.15;
    }
    //  อายุ 18-25 ปี และยอดซื้อเกิน 1,000 บาท
    else if (age >= 18 && age <= 25 && purchase_amount > 1000) {
        discount_rate = 0.10;
    }
    //  VIP ระดับ 5 หรือยอดซื้อเกิน 50,000 บาท
    else if (vip_level == 5 || purchase_amount > 50000) {
        discount_rate = 0.25;
    }

    return discount_rate;
}

int main() {
    int age, vip_level;
    float purchase_amount;
    float discount_rate, discount_amount, final_price;

    // 1. การรับข้อมูลอย่างถูกต้อง
    printf("Enter age: "); //ใส่ข้อมูลอายุ
    scanf("%d", &age);
    printf("Enter VIP level (1-5): "); //ใส่ระดับ VIP
    scanf("%d", &vip_level);
    printf("Enter purchase amount: "); //ใส่ยอดซื้อ
    scanf("%f", &purchase_amount);

    // 4. การคำนวณส่วนลด

    discount_rate = calculate_discount(age, vip_level, purchase_amount);
    
    // คำนวณยอดเงินที่ลดได้และราคาสุทธิ
    discount_amount = purchase_amount * discount_rate;
    final_price = purchase_amount - discount_amount;

    // 5. แสดงผลลัพธ์สื่อความหมาย
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, purchase_amount);

    // 2. โครงสร้าง if-else ถูกต้อง
    // 3. เงื่อนไขซับซ้อน (ใช้ && และ ||)
    if (discount_rate > 0) {
        printf("Discount received: %.0f%%\n", discount_rate * 100);
        printf("Discount amount: %.2f THB\n", discount_amount);
        printf("Final price: %.2f THB\n", final_price);
    } else {
        printf("No discount applied\n");
    }

    printf("\nThank you for shopping with us!\n"); //ขอบคุณที่ใช้บริการ

    return 0;
}