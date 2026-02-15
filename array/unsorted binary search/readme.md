# 🔎 Binary Search Program in C

## 📌 Description
This program implements the **Binary Search algorithm** in C.  
Binary search is an efficient searching technique that works on **sorted arrays**.

---

## ⚠️ Important
👉 The array must be **sorted** before performing binary search.

---

## ⚙️ How It Works
1. Input number of elements  
2. Input array elements  
3. Input the element to search  
4. Compare middle element with key  
5. Adjust search range until found or not found  

---

## 💻 How to Run

### Compile
gcc binary_search.c -o binary_search


### Run
./binary_search


---

## 🧾 Input
- Number of elements  
- Sorted array elements  
- Element to search  

---

## 📤 Output
- Displays position if element is found  
- Displays "elements not found" if not found  

---

## 🧪 Example

### Input
Enter number of elements: 5
Enter elements: 10 20 30 40 50
Enter search element: 30


### Output
element is found at:3


---

## 🧠 Algorithm
1. Start  
2. Input n  
3. Input sorted array  
4. Input key  
5. Set low = 0, high = n-1  
6. Repeat until low <= high  
   - mid = (low + high) / 2  
   - If arr[mid] == key → found  
   - If key > arr[mid] → search right  
   - Else search left  
7. If not found → print message  
8. End  

---

## ⏱️ Time Complexity
- Best Case: O(1)  
- Worst Case: O(log n)  

---

## ⚠️ Notes
- Works only on sorted arrays  
- Faster than linear search  
- Uses 1-based position output  

---