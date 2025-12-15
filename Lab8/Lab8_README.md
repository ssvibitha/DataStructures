# Lab 8 - Tree ADT - Binary Tree

## Program 1 - Largest Number of Blocks in Tower 1

## **Problem Statement**

You are given `n` block towers, numbered from `1` to `n`. The `i`-th tower consists of `a_i` blocks.
In one move, you can move one block from tower `i` to tower `j`, but only if `a_i > a_j`. That move increases `a_j` by 1 and decreases `a_i` by 1. You can perform as many moves as you would like (possibly, zero).
The task is to determine the largest number of blocks that you can have in tower 1 after performing any number of valid moves.

## **Input**

- The first line contains a single integer `t` (`1 ≤ t ≤ 10^4`) — the number of test cases.
- The first line of each test case contains a single integer `n` (`2 ≤ n ≤ 2 * 10^5`) — the number of towers.
- The second line contains `n` integers `a_1, a_2, ..., a_n` (`1 ≤ a_i ≤ 10^9`) — the number of blocks on each tower.

## **Output**
For each test case, print the largest number of blocks you can have on tower 1 after performing any number of moves.

## Program 2 - Tree ADT - Binary Tree Implementation
## **Overview**
This program implements a **character binary tree** with the following operations:

## **Operations**
1. **Insert** - Insert a new character into the binary tree.
2. **Preorder** - Print the elements in preorder traversal.
3. **Inorder** - Print the elements in inorder traversal.
4. **Postorder** - Print the elements in postorder traversal.
5. **Search** - Search for a character in the binary tree.
6. **Exit** - Exit the program.


## **Time Complexity of Operations:**

- **Insert**: O(log n) , where n is the number of nodes in the tree.
- **Preorder**: O(n) , where n is the number of nodes in the tree.
- **Inorder**: O(n), where n is the number of nodes in the tree.
- **Postorder**:O(n), where n is the number of nodes in the tree.
- **Search**: O(log n) , where n is the number of nodes in the tree.
