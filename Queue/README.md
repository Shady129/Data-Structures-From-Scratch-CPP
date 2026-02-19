# Queue Data Structure – From Scratch (C++)

📌 Overview

This project implements a generic Queue data structure 
from scratch using modern C++ templates.

The Queue follows the FIFO principle:

First In → First Out

It is built on top of a custom Doubly Linked List 
to demonstrate composition and abstraction.

---

🎯 Objectives

• Understand FIFO behavior internally
• Practice template-based generic design
• Apply composition (Queue built using Linked List)
• Strengthen pointer manipulation knowledge
• Write clean and reusable data structures

---

⚙️ Supported Operations

Push(T item)        → Insert element at end
Pop()               → Remove element from front
Front()             → Get first element
Back()              → Get last element
Size()              → Return number of elements
IsEmpty()           → Check if queue is empty
Print()             → Display elements

---

🧠 Internal Architecture

Queue is implemented using:

clsDblLinkedList<T>

Mapping:

Push()  → InsertAtEnd()
Pop()   → DeleteFirstNode()

This guarantees FIFO ordering.

════════════════════════════════════════════════════

⏱ Time Complexity (Big O Analysis)

Push      → O(1)
Pop       → O(1)
Front     → O(1)
Back      → O(n)*
Size      → O(1)
IsEmpty   → O(1)

*Back uses index-based access.

════════════════════════════════════════════════════

📂 Project Structure

Queue
│
├── clsMyQueue.h
├── main.cpp
└── README.md

════════════════════════════════════════════════════

▶ Example Usage

clsMyQueue<int> q;

q.Push(10);
q.Push(20);
q.Push(30);

q.Print();       // 10 20 30
q.Pop();
q.Print();       // 20 30

════════════════════════════════════════════════════

🔍 Design Highlights

✔ Generic Template Implementation
✔ Clean Abstraction Layer
✔ Separation of Concerns
✔ Reusable & Extensible Design
✔ Built Without STL Containers

════════════════════════════════════════════════════

🚀 Learning Outcome

After completing this implementation, you fully understand:

• How Queue works internally
• How FIFO is enforced
• How to build abstraction over another structure
• How to design scalable data structures
• How to think like a systems-level developer

════════════════════════════════════════════════════

👤 Author

Shady Mahmoud  
Data Structures & Backend Development Enthusiast  
GitHub: https://github.com/Shady129

════════════════════════════════════════════════════
