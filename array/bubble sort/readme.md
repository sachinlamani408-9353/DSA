# 🔄 Bubble Sort Program in C

## 📌 Description
This program implements the **Bubble Sort algorithm** in C.  
Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

---

## ⚙️ How It Works
1. Input number of elements  
2. Input array elements  
3. Compare adjacent elements  
4. Swap if elements are in wrong order  
5. Repeat until array is sorted  

---

## 💻 How to Run

### Compile
gcc bubble_sort.c -o bubble_sort


### Run
./bubble_sort


---

## 🧾 Input
- Number of elements  
- Array elements  

---

## 📤 Output
- Displays the sorted array  

---

## 🧪 Example

### Input
Enter number of elements: 5
Enter elements: 5 3 1 4 2


### Output
sorted array
1 2 3 4 5


---

## 🧠 Algorithm
1. Start  
2. Input n  
3. Input array  
4. For i = 0 to n-1  
   - For j = 0 to n-1-i  
     - If arr[j] > arr[j+1] → swap  
5. Print sorted array  
6. End  

---

## ⏱️ Time Complexity
- Best Case: O(n)  
- Worst Case: O(n²)  

---

## ⚠️ Note
- This program uses Bubble Sort logic  
- There is a small mistake in your code:  
  👉 You should compare `arr[j]` and `arr[j+1]` instead of `arr[i]`

### ✅ Correct Condition