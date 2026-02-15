# 🔽 Selection Sort Program in C

## 📌 Description
This program implements the **Selection Sort algorithm** in C.  
Selection Sort works by repeatedly finding the **minimum element** from the unsorted part and placing it at the beginning.

---

## ⚙️ How It Works
1. Input number of elements  
2. Input array elements  
3. Find the smallest element in the unsorted array  
4. Swap it with the first unsorted element  
5. Repeat until the array is sorted  

---

## 💻 How to Run

### Compile
gcc selection_sort.c -o selection_sort


### Run
./selection_sort


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
Enter elements: 64 25 12 22 11


### Output
sorted array
11 12 22 25 64


---

## 🧠 Algorithm
1. Start  
2. Input n  
3. Input array  
4. For i = 0 to n-2  
   - Set min = i  
   - For j = i+1 to n-1  
     - If arr[j] < arr[min], update min  
   - Swap arr[i] and arr[min]  
5. Print sorted array  
6. End  

---

## ⏱️ Time Complexity
- Best Case: O(n²)  
- Worst Case: O(n²)  

---

## ⚠️ Notes
- Always performs the same number of comparisons  
- Simple and easy to understand  
- Efficient for small datasets  

---