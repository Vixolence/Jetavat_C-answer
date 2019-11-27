# แนวคำตอบ โจทย์ปัญหาชวนคิดชุดที่ 2

### 1. จากชื่อตัวแปรที่กำหนดให้ ข้อใดไม่ถูกต้อง เพราะเหตุใด
**แนวคำตอบ**

    1.1. _grade [✓]
    1.2. 2010_count [x] เพราะ ขึ้นต้นด้วยตัวเลข
    1.3. hi_score [✓]
    1.4. short [x] เพราะ เป็นคำสงวน
    1.5. AVERAGE [✓]
    1.6. Student Grade [x] เพราะ มีช่องว่าง
---
### 2. จงอธิบายรูปแบบการประกาศตัวแปรต่อไปนี้ว่า มีกี่ตัวแปร และแต่ละตัวเก็บข้อมูลชนิดใด และมีการกำหนดค่าอย่างไร

**แนวคำตอบ**

    2.1. int a, b, c; 
        => มี 3 ตัวแปร และทั้ง 3 ตัวแปรเก็บข้อมูลชนิดจำนวนเต็ม
    2.2. int x , y = 10 , z = 20; 
        => มี 3 ตังแปร และทั้ง 3 ตัวแปรเก็บข้อมูลชนิดจำนวนเต็ม โดยที่ x ยังไม่กำหนดค่า y กำหนดค่าเป็น 10 และ z กำหนดค่าเป็น 20
    2.3. char i , j, k; 
        => มี 3 ตัวแปร และทั้ง 3 ตัวแปรเก็บข้อมูลชนิดตัวอักษร และทั้ง 3 ตัวแปรยังไม่กำหนดค่า
    2.4 char Text[10] = "Program"; => 
        => มีตัวแปรเดียว และตัวแปรเก็บข้อมูลชนิดกลุ่มตัวอักษร 10 ตัว และกำหนดค่าว่า "Program"
---
### 3. จงนำค่าที่กำหนดให้ต่อไปนี้ไประบุค่าให้กับตัวแปรเพื่อใช้งานให้ถูกต้อง
**แนวคำตอบ**

    3.1. 0 => int
    3.2. '0' => char
    3.3. "-2.0" => string
    3.4. 3.14 => float
    3.5. "y" => string
---
### 4. ถ้าต้องการเขียนโปรแกรมทำงานกับรูปแบบข้อมูลต่อไปนี้ ควรประกาศชนิดใดเพื่อใช้งาน (ตัวอักษร, ข้อความ, เลขจำนวนเต็ม หรือ เลขจำนวนจริง)
**แนวคำตอบ**

    4.1. ระยะทางระหว่างสถานที่ => เลขจำนวนเต็ม หรือ เลขจำนวนจริง
    4.2. ชื่อของนักเรียน => ข้อความ
    4.3. รหัสของนักเรียน => เลขจำนวนเต็ม
    4.4. อายุของนักเรียน => เลขจำนวนเต็ม
    4.5. เกรดเฉลี่ยของนักเรียน => เลขจำนวนจริง
---
### 5. จากข้อที่ 4 จงประกาศตัวแปรเพื่อใช้งานให้ถูกต้อง
**แนวคำตอบ**

    5.1. ระยะทางระหว่างสถานที่ => int distance; หรือ float distance;
    5.2. ชื่อของนักเรียน => char[] name;
    5.3. รหัสของนักเรียน => int ID;
    5.4. อายุของนักเรียน => int age;
    5.5. เกรดเฉลี่ยของนักเรียน => float GPA;
---