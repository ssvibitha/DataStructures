# Lab 9 - Tree ADT – Binary Search Tree
## Program 1 - Nene's Game
### Problem Statement
Given an increasing sequence **a = [a₁, a₂, ..., aₖ]**, and **n** players lined up in a row:
- In each round, players at positions **a₁, a₂, ..., aₖ** are removed (if they exist).
- The game ends when no players are removed in a round.
- Remaining players are declared **winners**.
### Input
- Integer **k** — size of sequence **a**
- Sequence of **k** integers **a₁ < a₂ < ... < aₖ**
- Integer **q** — number of queries
- Sequence of **q** integers **n₁, n₂, ..., n_q**

### Output
For each query, print the number of winners when starting with **nᵢ** players.
## Program 2 - Subtract max
### Problem Statement
Given **n** participants with strengths **s₁, s₂, ..., sₙ**, for each participant **i**, compute the difference between **sᵢ** and the strength of the strongest participant excluding **i**.
Formally, output **sᵢ − max(s₁, s₂, ..., sᵢ₋₁, sᵢ₊₁, ..., sₙ)** for all **i**.

### Input
- Integer **n** — number of participants
- Sequence of **n** integers **s₁, s₂, ..., sₙ** — strengths
### Output
- **n** integers: for each **i**, the value of **sᵢ − max(other participants)**

## Program 3 -  Binary Search Tree

## Overview

Write a C++ menu-driven program to implement Tree ADT using a Binary Search Tree (BST). Maintain proper boundary conditions and follow good coding practices. The Tree ADT should have the following operations:
1. Insert  
2. Preorder Traversal  
3. Inorder Traversal  
4. Postorder Traversal  
5. Search  
6. Exit  

## Time Complexity of Each Operation
- Insert: **O(log n)**  
- Preorder Traversal: **O(n)**  
- Inorder Traversal: **O(n)**  
- Postorder Traversal: **O(n)**  
- Search: **O(log n)**  

Where **n** is the number of nodes 

## Program 4 - Expression Tree Construction

### Overview

Enhance the Binary Tree ADT by adding a method to construct an Expression Tree using a valid postfix expression. Import the stack from the Standard Template Library (STL) to help with constructing the expression tree. 
Write a separate program that imports the Tree ADT code and performs the following operations:

1. Get Postfix Expression  
2. Construct Expression Tree  
3. Preorder Traversal  
4. Inorder Traversal  
5. Postorder Traversal  
6. Exit  

### Time Complexity of Each Operation

- Get Postfix Expression: **O(m)**  
- Construct Expression Tree: **O(m)**  
- Preorder Traversal: **O(m)**  
- Inorder Traversal: **O(m)**  
- Postorder Traversal: **O(m)**  

Where **m** is the length (number of tokens) of the postfix expression (equal to the number of nodes in the expression tree).

### Notes

- Constructing the expression tree takes linear time **O(m)** because each symbol (operand/operator) is processed exactly once.
- Traversals of the expression tree visit each node once, hence **O(m)**.

