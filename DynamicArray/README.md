# 🚀 Dynamic Array Implementation in C++

---

## 📌 Overview
This project is a custom implementation of a **Dynamic Array** using C++ templates.  
It demonstrates manual memory management using `new` and `delete`,  
and applies proper copy-safe design principles.

This project was built step-by-step to deeply understand:
- Heap vs Stack
- Shallow Copy vs Deep Copy
- Rule of Three
- Manual resizing logic
- Memory safety

---

## 🧠 Concepts Covered

✔ Dynamic Memory Allocation  
✔ Pointers & Heap Management  
✔ Constructor & Destructor  
✔ Resize Logic  
✔ Insert / Delete Operations  
✔ Reverse Algorithm  
✔ Clear & Safety Handling  
✔ Shallow Copy Problem  
✔ Deep Copy Concept  
✔ Rule of Three Awareness  

---

## ⚙️ Features Implemented

### 🔹 Core Operations
- Create dynamic array with custom size
- Set item by index
- Get item by index
- Print elements
- Check if empty

### 🔹 Modification Operations
- Insert at beginning
- Insert at end
- Insert before index
- Insert after index
- Insert at specific index
- Delete at index
- Resize array
- Reverse array
- Clear array

---

## 🏗️ Internal Design

The class manages:

- `_Size` → current array size  
- `OriginalArray` → pointer to heap memory  

All resizing operations:
1. Allocate new memory
2. Copy required elements
3. Delete old memory
4. Redirect pointer
5. Update size

---

## 🔥 Memory Safety Design

This implementation avoids:

❌ Memory Leaks  
❌ Dangling Pointers  
❌ Double Delete  
❌ Unsafe Resize  

Key principle used:

> If you allocate dynamic memory,  
> you must control how copying behaves.

---

## 💣 Important Learning Point

Default object copying causes:

Shallow Copy → Two objects point to the same heap memory.

Solution:

Implement Deep Copy using a custom Copy Constructor  
to allocate new memory and copy elements safely.

---

## 🧪 Example Usage

```cpp
clsDynamicArray<int> arr(5);

for (int i = 0; i < arr.Size(); i++)
{
    arr.SetItem(i, (i + 1) * 10);
}

arr.InsertAtEnd(60);
arr.DeleteAtItem(2);
arr.Reverse();
arr.Resize(3);
```

---

## 📚 What This Project Teaches

This is not just an array project.  
It is a memory management training project.

After completing it, you understand:

- How dynamic containers really work
- Why `std::vector` is safe
- Why Rule of Three matters
- What happens during object copying
- How crashes like double delete occur

---

## 👑 Final Status

✔ Fully working  
✔ Memory safe  
✔ Logically correct  
✔ Tested operations  
✔ Clean design  

---



