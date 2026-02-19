# Queue Data Structure – From Scratch (C++)

📌 Overview

This project implements a generic Queue data structure 
from scratch using modern C++ templates.

The Queue follows the FIFO principle:

First In → First Out

It is built on top of a custom Doubly Linked List 
to demonstrate composition, delegation, and abstraction.

---

🎯 Objectives

• Understand FIFO behavior internally  
• Practice template-based generic design  
• Apply composition (Queue built using Linked List)  
• Strengthen pointer manipulation knowledge  
• Demonstrate delegation to an underlying structure  
• Write clean and reusable data structures  

---

⚙️ Core Queue Operations (FIFO)

Push(T item)        → Insert element at end  
Pop()               → Remove element from front  
Front()             → Get first element  
Back()              → Get last element  
Size()              → Return number of elements  
IsEmpty()           → Check if queue is empty  
Clear()             → Remove all elements  
Print()             → Display elements  

These operations represent the true FIFO behavior.

---

🧪 Extended Operations (Educational Purposes Only)

Reverse()  
GetItem(int index)  
Update(int index, T item)  
InsertAfter(int index, T value)  
InsertAtFront(T value)  

⚠ These operations are added for learning and experimentation.
They are NOT typical Queue operations and would not be exposed
in a strict production-level Queue implementation.

They demonstrate:

• Delegation  
• Wrapper design  
• Index-based access  
• Code reuse  
• Composition over inheritance  

---

🧠 Internal Architecture

Queue is implemented using:

clsDblLinkedList<T>

Mapping:

Push()  → InsertAtEnd()  
Pop()   → DeleteFirstNode()  
Reverse() → Delegated to LinkedList  
Update()  → Delegated to LinkedList  

This guarantees FIFO ordering while allowing educational extensions.

---

⏱ Time Complexity (Big O Analysis)

Push      → O(1)  
Pop       → O(1)  
Front     → O(1)  
Back      → O(n)*  
Size      → O(1)  
IsEmpty   → O(1)  

*Back uses index-based access.

Extended operations may vary depending on LinkedList implementation.

---

📂 Project Structure

Queue  
│  
├── clsMyQueue.h  
├── clsDblLinkedList.h  
├── main.cpp  
└── README.md  

---

▶ Example Usage

clsMyQueue<int> myList;

myList.Push(10);  
myList.Push(20);  
myList.Push(30);  

myList.Print();       // 10 20 30  

myList.Reverse();  
myList.Print();       // 30 20 10  

myList.Update(0, 90);  
myList.Print();       // 90 20 10  

---

🔍 Design Highlights

✔ Generic Template Implementation  
✔ Clean Abstraction Layer  
✔ Composition over Inheritance  
✔ Delegation to underlying structure  
✔ Educational Extension of Standard Queue  
✔ Built Without STL Containers  

---

🚀 Learning Outcome

After completing this implementation, you fully understand:

• How Queue works internally  
• How FIFO is enforced  
• How abstraction hides implementation details  
• How delegation works in C++  
• When extending a structure breaks abstraction  
• How to think like a systems-level developer  

---

👤 Author

Shady Mahmoud  
Data Structures & Backend Development Enthusiast  
GitHub: https://github.com/Shady129
