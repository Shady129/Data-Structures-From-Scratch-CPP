
# Queue – C++ Implementation

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 Overview

This project implements a generic Queue data structure 
from scratch using C++ templates.

The Queue is built on top of a custom Doubly Linked List.

Main concept:
FIFO → First In, First Out

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

⚙️ Features

• Push      → Insert at end
• Pop       → Remove from front
• Front     → Get first element
• Back      → Get last element
• Size
• IsEmpty
• Print

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🧠 Internal Design

The Queue internally uses:

clsDblLinkedList<T>

Push  → InsertAtEnd()
Pop   → DeleteFirstNode()

This ensures FIFO behavior.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

⏱ Time Complexity (Big O)

Push      → O(1)
Pop       → O(1)
Front     → O(1)
Back      → O(n)*
Size      → O(1)
IsEmpty   → O(1)

*Back depends on index-based access.

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📂 Project Structure

Queue
│
├── clsMyQueue.h
├── main.cpp
└── README.md

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

▶ Example Usage

clsMyQueue<int> q;

q.Push(10);
q.Push(20);
q.Push(30);

q.Print();     // 10 20 30
q.Pop();
q.Print();     // 20 30

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Learning Outcome

• Understand FIFO principle
• Implement Queue using Linked List
• Practice abstraction & composition
• Build reusable template-based structures

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
