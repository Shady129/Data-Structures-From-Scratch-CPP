# 🚀 MyQueue Using Dynamic Array (C++)

---

## 📌 Overview

This project implements a custom **Queue Data Structure** using a self-built **Dynamic Array** class.

The goal of this project is to deeply understand:

- Dynamic Memory Allocation
- Templates in C++
- Resizing Arrays
- Queue Operations Implementation
- Manual Memory Management (new / delete)

This project was built for logic training and mastering data structures fundamentals.

---

## 🏗 Project Structure

```
📂 MyQueueArr
 ┣ 📄 clsDynamicArray.h
 ┣ 📄 clsMyQueueArr.h
 ┣ 📄 main.cpp
 ┗ 📄 README.md
```

---

## 🧠 Core Classes

### 1️⃣ clsDynamicArray<T>

A fully custom dynamic array that supports:

- Resize
- InsertAt
- InsertAtBeginning
- InsertAtEnd
- InsertBefore
- InsertAfter
- DeleteItemAt
- DeleteFirstItem
- DeleteLastItem
- Reverse
- Clear
- GetItem
- SetItem
- Size
- IsEmpty
- PrintList

All memory is handled manually using:

```
new[]
delete[]
```

---

### 2️⃣ clsMyQueueArr<T>

A Queue implementation built on top of `clsDynamicArray`.

Supported Operations:

- Push
- Pop
- Front
- Back
- Size
- IsEmpty
- Reverse
- InsertAtFront
- InsertAtBack
- Update
- Clear
- Print

---

## ⚙️ Queue Behavior

- Push ➜ Insert at end
- Pop ➜ Remove last item
- Front ➜ First element
- Back ➜ Last element

---

## 🧪 Example Usage

```cpp
clsMyQueueArr<int> q;

q.Push(10);
q.Push(20);
q.Push(30);

q.Print();

cout << q.Front();
cout << q.Back();

q.Pop();
q.Print();
```

---

## 🎯 Learning Objectives

✔ Master dynamic memory  
✔ Understand template classes  
✔ Practice manual resizing  
✔ Strengthen logic building  
✔ Implement data structures from scratch  

---

## 📚 Concepts Used

- Templates
- Dynamic Memory Allocation
- Rule of Memory Management
- Index Validation
- Array Reallocation Strategy
- Object Composition

---

## 🏁 Final Notes

This project is part of my journey to mastering:

- Data Structures
- Clean Code
- Memory Management
- C++ Fundamentals

Built step-by-step with full manual implementation for maximum understanding.

---

💻 Developed by: Shady Mahmoud  
📅 Practice Project  
