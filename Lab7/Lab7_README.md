# **LAb 7 - Queue ADT**

## **Program 1 - Queue ADT Using Integer Array**
### **Overview**
This program implements a Queue ADT using an integer array of size 5, allowing the following operations:
1. Enqueue
2. Dequeue
3. Peek
4. Exit

### **Time Complexity**
- **Enqueue**: O(1)
- **Dequeue**: O(1)
- **Peek**: O(1)
- 
## **Program 2 - Circular Queue ADT Using Integer Array**
### **Overview**
This program implements a Circular Queue ADT using an integer array of size 5, with the following operations:
1. Enqueue
2. Dequeue
3. Peek
4. Exit

### **Time Complexity**
- **Enqueue**: O(1)
- **Dequeue**: O(1)
- **Peek**: O(1)

## **Program 3 - Queue ADT Using Integer Linked List**
### **Overview**
This program implements a Queue ADT using a singly linked list with the following operations:
1. Enqueue
2. Dequeue
3. Peek
4. Exit

### **Time Complexity**
- **Enqueue**: O(1)
- **Dequeue**: O(1)
- **Peek**: O(1)

## **Program 4 - String Processing with Stack ADT**
### **Problem Description**
Given a string containing the '+' symbol, process the string so that the final output doesn't include the '+' symbol and its immediate left non-'+' symbol.

For example:
- Input: `45fgd+++ab+c`
- Output: `45ac`

### **Operations**
1. **Process String**: Removes the non-'+' symbol and the '+' symbols based on the described logic.

### **Time Complexity of Each Solution**
- **Optimal Solution**: O(n)

### **Chosen ADT and Data Structure**
- **ADT**: Stack ADT
- **Data Structure**: Stack

Using a **stack** is optimal because the operation of removing the most recent character (when encountering a '+') aligns well with the **LIFO** (Last In, First Out) principle of the stack. Each character is processed once, ensuring linear time complexity.

