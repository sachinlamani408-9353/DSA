# Employee Overtime Salary Calculator (C Program)

## 📌 Description
This C program calculates the **overtime pay** for **4 employees** based on the number of hours they worked.  
If an employee works **more than 40 hours**, they are paid **Rs.120 per extra hour** as overtime.  
If they work **40 hours or less**, no overtime is paid.

The program uses:
- `while` loop
- `if-else` condition
- User input using `scanf()`

---

## ✅ Overtime Rules
- **Normal Working Hours:** 40 hours  
- **Overtime Pay Rate:** Rs. 120 per hour  
- **Overtime Condition:** Hours > 40

---

## 🧾 Program Logic
1. The program runs a loop for **4 employees**.
2. For each employee:
   - Takes number of hours worked as input.
   - Checks if hours are more than 40.
   - Calculates overtime pay if applicable.
3. Displays:
   - Total hours worked
   - Overtime pay

---

## 💻 Source Code
```c
// find 4 employees net salary and if employee works more than 40 hours it is overtime then find total salary
#include <stdio.h>

int main() {
    int hours;
    float otpay;
    int i = 1;

    while (i <= 4) {
        printf("Enter no. of hours worked: ");
        scanf("%d", &hours);

        if (hours > 40)
            otpay = (hours - 40) * 120;
        else
            otpay = 0;

        printf("Hours = %d  Overtime Pay = Rs. %.2f\n", hours, otpay);

        i++;
    }

    return 0;
}
▶️ How to Run the Program
Step 1: Compile the program
bash
Copy code
gcc overtime.c -o overtime
Step 2: Run the program
bash
Copy code
./overtime
🧪 Sample Input & Output
Input:
nginx
Copy code
Enter no. of hours worked: 45
Enter no. of hours worked: 40
Enter no. of hours worked: 50
Enter no. of hours worked: 38
Output:
ini
Copy code
Hours = 45  Overtime Pay = Rs. 600.00
Hours = 40  Overtime Pay = Rs. 0.00
Hours = 50  Overtime Pay = Rs. 1200.00
Hours = 38  Overtime Pay = Rs. 0.00