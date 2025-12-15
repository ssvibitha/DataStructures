# Lab 6 - Stack ADT

## **Program 1 -  Stack ADT Using Character Array of Size 5**

### **Overview**
This program implements the Stack ADT using a fixed character array of size 5. It provides the following operations:

1. Push
2. Pop
3. Peek
4. Exit

### **Time Complexities**
1. **Push**: O(1)  
2. **Pop**: O(1)  
3. **Peek**: O(1)  

## **Program 2 - Stack ADT Using Character Singly Linked List**

### **Overview**
This program implements the Stack ADT using a singly linked list. The following operations are supported:

1. Push
2. Pop
3. Peek
4. Exit

### **Operations and Time Complexities**
1. **Push**: O(1)  
2. **Pop**:O(1)  
3. **Peek**:O(1)  

## **Program 3 - Infix to Postfix Conversion and Postfix Evaluation**

### **Overview**
This program converts an infix expression to postfix and evaluates the postfix expression using a stack. It includes the following operations:

1. Get Infix
2. Convert Infix
3. Evaluate Postfix
4. Exit

### **Time Complexity**
1. **Get Infix**: O(n) where `n` is the length of the infix expression. The program scans the input to store the infix expression.
2. **Convert Infix to Postfix**: O(n) where `n` is the number of operators and operands in the infix expression. Conversion involves a single pass through the expression with stack operations for precedence and associativity.
3. **Evaluate Postfix**: O(n) where `n` is the number of elements in the postfix expression. Each element is processed once, with stack operations for evaluation.

## **Proram 4- Parenthesis Balance Checker**

### **Overview**
This program checks if a string of parentheses is balanced using a stack. The following operations are supported:

1. Check Balance
2. Exit

### **Time Complexity**
1. **Check Balance**: O(n), where `n` is the length of the string. The program scans through the string once, checking each parenthesis.
   
### **Optimal Solution**
The optimal solution uses a stack (or linked list) with the time complexity of O(n), where `n` is the length of the input string.
