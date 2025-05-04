# Lab 5 - List ADT Circular and Doubly Linked List

## **Overview**  
This lab demonstrates the implementation of **List ADTs** using **Doubly Linked List**, **Circular Linked List**, and also simulates the **Round-Robin Scheduling Algorithm** using a circular linked list.

## **Program 1 - List ADT using Doubly Linked List with Tail**

### **Overview**  
This program implements a Doubly Linked List with a tail pointer and supports various operations to manage a list.

### **Supported Operations**
1. **Insert Beginning** — Insert a node at the start of the list  
2. **Insert End** — Insert a node at the end of the list  
3. **Insert Position** — Insert a node at a specified position  
4. **Delete Beginning** — Remove the first node  
5. **Delete End** — Remove the last node  
6. **Delete Position** — Remove a node at a specific position  
7. **Search** — Search for an element in the list  
8. **Display** — Display all elements in the list  
9. **Exit** — Terminate the program  

### **Time Complexity of Operations**
- **Insert Beginning**: O(1)
- **Insert End**: O(1)
- **Insert Position**: O(n)
- **Delete Beginning**: O(1)
- **Delete End**: O(1)
- **Delete Position**: O(n)
- **Search**: O(n)
- **Display**: O(n)

## **Program 2 - List ADT using Circular Linked List**

### **Overview**  
This program demonstrates the implementation of a Circular Linked List and supports a menu-driven approach for various list operations.

### **Supported Operations**
1. **Insert Beginning** — Insert a node at the start of the circular list  
2. **Insert End** — Insert a node at the end of the circular list  
3. **Insert Position** — Insert a node at a specified position  
4. **Delete Beginning** — Remove the first node  
5. **Delete End** — Remove the last node  
6. **Delete Position** — Remove a node at a specific position  
7. **Search** — Search for an element in the list  
8. **Display** — Display all elements in the circular list  
9. **Exit** — Terminate the program  

### **Time Complexity of Operations**
- **Insert Beginning**: O(1)
- **Insert End**: O(1)
- **Insert Position**: O(n)
- **Delete Beginning**: O(1)
- **Delete End**: O(1)
- **Delete Position**: O(n)
- **Search**: O(n)
- **Display**: O(n)


## **Program 3 - Round-Robin Scheduling Algorithm using Circular Linked List**

### **Overview**  
This program simulates the Round-Robin Scheduling Algorithm using a Circular Linked List. It manages a queue of processes, each with a fixed time slice for execution.

### **Supported Operations**
1. **Insert Process** — Add a process to the queue with a specified time slot  
2. **Execute** — Execute the process at the front of the queue and update its remaining time  
3. **Exit** — Terminate the program  

### **Execution Process**
- **Insert Process**: Each process is inserted into the queue with its remaining time.
- **Execute**: The process at the front is removed, and its remaining time is reduced by the fixed time slice. If the remaining time is still positive, the process is added back to the end of the queue.
- The program continues executing until all processes are completed.

### **Time Complexity of Operations**
- **Insert process**: O(1)
- **Delete process**: O(1)
