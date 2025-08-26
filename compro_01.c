# include <stdio.h>

int main() {
   float score =70.0; // คะแนนสอบ
   float final_score; // คะแนนสอบสุดท้าย
   if (score >=50.0) {// คะแนนสอบถึง 50 ขึ้นไป
       (final_score = score+(score*0.05)); // คะแนนสอบ+5%
       printf("Final score: %.1f\n", final_score); //พิมพ์คะแนนสอบสุดท้าย
   }

   else if (score < 50.0)// คะแนนสอบไม่ถึง 50
  {
      printf("Final score: %.1f\n", score); // คะแนนสอบไม่ถึง 50 ไม่เพิ่ม 5%
  }
  

    return 0;
}
    