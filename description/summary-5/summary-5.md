# แนวคำตอบ โจทย์ปัญหาชวนคิดชุดที่ 5

### 1. จงหาค่า x, y และ z จากคำสั่งที่กำหนดให้ 
โดยที่ ` x = 4  `, ` y = 0` และ `z = 2`
```c
if ( x != 0 )
    y = 3;
else
    z = 2;
```

##### แนวคำตอบ
```c
x = 4
y = 3
z = 2
```
##### ที่มาของแนวคำตอบ
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[รหัสแหล่งที่มา โจทย์ปัญหาชวนคิด ชุดที่ 5 ข้อที่ 1](https://github.com/Vixolence/Jetavat_C-answer/blob/master/src/summary-5/5-1.c)

##### คำอธิบายแนวคำตอบ
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; มีขั้นตอนการคำนวณดังนี้

 1. ประกาศตัวแปร x,y,z (เก็บข้อมูลจำนวนเต็ม)
 2. ให้ `x = 4` `y = 0` `z = 2`
 3. ถ้า x ไม่เท่ากับ 0 ให้ `y = 3` ถ้าเป็นเท็จ ไปที่ 3.1

 &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3.1 ให้ `z = 2`


 ###### หมายเหตุ
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; *ในข้อที่ 3 ประกอบกับข้อ 2 `x = 4` ซึ่งไม่เท่ากับ 0 เงื่อนไขนี้จึงเป็นจริง ดังนั้นจึงให้ `y = 3` นั่นเอง*

---

### 2. จงหาค่า x และ y จากคำสั่งที่กำหนดให้ 
```c
int x = 3, y = 10;
if ( ( 3 / x ) < y )
    x = x + 2;
    y = y + 1;
```

##### แนวคำตอบ
```c
x = 5
y = 11
```

##### ที่มาของแนวคำตอบ
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[รหัสแหล่งที่มา โจทย์ปัญหาชวนคิด ชุดที่ 5 ข้อที่ 2](https://github.com/Vixolence/Jetavat_C-answer/blob/master/src/summary-5/5-2.c)

##### คำอธิบายแนวคำตอบ
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; มีขั้นตอนการคำนวณ ดังนี้
1. ประกาศตัวแปร x และ y และให้ `x = 3` และ `y = 10`
2. จากสูตร `((3 / x) < y)` ให้แทนค่าเป็น `((3 / 3) < 10)`
3. จะได้ `(1 < 10)` ซึ่งเป็นนิพจน์ที่เป็นจริง
4. นิพจน์เป็นจริง `x = x + 2` จะได้ 5 และ `y = y + 1` จะได้ 11 
---

### 3. จงเขียนโปรแกรมของการรับค่าอายุแล้วให้ทำการแสดงผลลัพธ์ โดยมีเงื่อนไข คือ
    ถ้าอายุน้อยกว่าหรือเท่ากับ 40 ให้แสดงคำว่า "You are young"
    ถ้าอายุมากกว่า 40 ให้แสดงคำว่า "You are old"

##### รหัสแหล่งที่มา
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[รหัสแหล่งที่มา โจทย์ปัญหาชวนคิด ชุดที่ 5 ข้อที่ 3](https://github.com/Vixolence/Jetavat_C-answer/blob/master/src/summary-5/5-3.c)

##### คำอธิบายการทำงาน
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; มีขั้นตอนการคำนวณดังนี้
    
1. ประกาศตัวแปร `อายุ` (ชนิดจำนวนเต็ม)
2. แสดงผล คำถามเพื่อให้ระบุ `อายุ`
3. รับค่า `อายุ`
4. ถ้า `อายุ น้อยกว่าหรือเท่ากับ 40` ให้แสดงผล `"You are young"` มิฉะนั้น ให้แสดงผล `"You are old"`

---
### 4. จงเขียนโปรแกรมคำนวณเงินพร้อมกับแสดงราคาสุทธิจากการขายสินค้า โดยมีเงื่อนไขดังนี้

    ถ้าซื้อน้อยกว่า 10 ชิ้น     ขายราคาชิ้นละ 20 บาท
    ถ้าซื้อตั้งแต่ 10 ชิ้นขึ้นไป   ขายราคาชิ้นละ 10 บาท

##### รหัสแหล่งที่มา
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[รหัสแหล่งที่มา โจทย์ปัญหาชวนคิด ชุดที่ 5 ข้อที่ 4](https://github.com/Vixolence/Jetavat_C-answer/blob/master/src/summary-5/5-4.c)

##### คำอธิบายการทำงาน
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ยังไม่มีคำอธิบายในขณะนี้

---
### 5. ให้นักเรียนเขียนโปรแกรมของการรับคะแนนในรายวิชา หลักการเขียนโปรแกรมเพื่อตัดเกรด โดยมีเงื่อนไขการตัดเกรด ดังนี้

    คะแนน 80 - 100 ได้เกรด 4
    คะแนน 75 - 79  ได้เกรด 3.5
    คะแนน 70 - 74  ได้เกรด 3
    คะแนน 65 - 69  ได้เกรด 2.5
    คะแนน 60 - 64  ได้เกรด 2
    คะแนน 55 - 59  ได้เกรด 1.5
    คะแนน 50 - 54  ได้เกรด 1
    คะแนน 0 - 49   ได้เกรด 0

##### รหัสแหล่งที่มา
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;[รหัสแหล่งที่มา โจทย์ปัญหาชวนคิด ชุดที่ 5 ข้อที่ 5 ](https://github.com/Vixolence/Jetavat_C-answer/blob/master/src/summary-5/5-5.c)


##### คำอธิบายการทำงาน
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; ยังไม่มีคำอธิบายในขณะนี้

---