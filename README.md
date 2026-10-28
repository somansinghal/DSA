# Data Structures & Algorithms (DSA)

[![C Standard](https://img.shields.io/badge/Language-C99%20%2F%20C11-00599C?logo=c&logoColor=white)](https://en.cppreference.com/w/c)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang-success?logo=gnu)](https://gcc.gnu.org/)
[![Build Status](https://img.shields.io/badge/Build-Passing%20(32%2F32)-brightgreen)](#compilation--execution)
[![Platform](https://img.shields.io/badge/Platform-macOS%20%7C%20Linux%20%7C%20Windows-lightgrey)](#getting-started)
[![License](https://img.shields.io/badge/License-MIT-blue.svg)](LICENSE)

A curated, modular suite of **32 standalone C implementations** covering essential data structures, classical sorting and searching routines, recursion, linear dynamic data structures, expressions, and graph traversals.

Each program is engineered to be **self-contained**, **cleanly formatted**, and compilable directly with zero external dependencies.

---

## 📑 Table of Contents

- [Overview & Architecture](#-overview--architecture)
- [Program Catalog & Complexity Matrix](#-program-catalog--complexity-matrix)
  - [1. Matrix Operations](#1-matrix-operations)
  - [2. Searching Algorithms](#2-searching-algorithms)
  - [3. Sorting Algorithms](#3-sorting-algorithms)
  - [4. Stack Implementations & Applications](#4-stack-implementations--applications)
  - [5. Recursion & Divide-and-Conquer](#5-recursion--divide-and-conquer)
  - [6. Queue Implementations](#6-queue-implementations)
  - [7. Singly Linked Lists](#7-singly-linked-lists)
  - [8. Doubly Linked Lists](#8-doubly-linked-lists)
  - [9. Graph Traversals](#9-graph-traversals)
- [Compilation & Execution](#-compilation--execution)
  - [Prerequisites](#prerequisites)
  - [Compile and Run a Single Program](#compile-and-run-a-single-program)
  - [Batch Compilation Script](#batch-compilation-script)
- [Key Specifications & Usage Notes](#-key-specifications--usage-notes)
- [Code Style & Standards](#-code-style--standards)

---

## 🎯 Overview & Architecture

- **Standalone Executables**: Each `.c` file has its own `main()` function with interactive console I/O, allowing independent compilation and unit testing.
- **Zero External Dependencies**: Implemented using standard POSIX/ISO C runtime libraries (`<stdio.h>`, `<stdlib.h>`, `<ctype.h>`).
- **Clean Formatting**: Formatted with standard 4-space indentation, explicit operator padding, separate-line statement structure, and clean control-flow blocks.
- **Pedagogical Clarity**: Designed to demonstrate both algorithmic correctness and low-level memory mechanics (pointers, dynamic memory allocation with `malloc`/`free`, and manual array manipulations).

---

## 📊 Program Catalog & Complexity Matrix

### 1. Matrix Operations

| File | Description | Time Complexity | Auxiliary Space |
| :--- | :--- | :---: | :---: |
| [`01_matrix_addition.c`](01_matrix_addition.c) | Element-wise addition of two $r \times c$ matrices | $\mathcal{O}(r \times c)$ | $\mathcal{O}(1)$ |
| [`02_matrix_subtraction.c`](02_matrix_subtraction.c) | Element-wise subtraction of two $r \times c$ matrices | $\mathcal{O}(r \times c)$ | $\mathcal{O}(1)$ |
| [`03_matrix_multiplication.c`](03_matrix_multiplication.c) | Matrix product with dimension validation ($c_1 = r_2$) | $\mathcal{O}(r_1 \cdot c_1 \cdot c_2)$ | $\mathcal{O}(1)$ |
| [`04_matrix_transpose.c`](04_matrix_transpose.c) | Matrix transposition (swapping rows and columns) | $\mathcal{O}(r \times c)$ | $\mathcal{O}(1)$ |

### 2. Searching Algorithms

| File | Description | Time Complexity (Best / Avg / Worst) | Auxiliary Space | Precondition |
| :--- | :--- | :---: | :---: | :--- |
| [`05_linear_search.c`](05_linear_search.c) | Sequential element scanning | $\mathcal{O}(1)\ /\ \mathcal{O}(n)\ /\ \mathcal{O}(n)$ | $\mathcal{O}(1)$ | None |
| [`06_binary_search.c`](06_binary_search.c) | Iterative logarithmic interval halving | $\mathcal{O}(1)\ /\ \mathcal{O}(\log n)\ /\ \mathcal{O}(\log n)$ | $\mathcal{O}(1)$ | Sorted Array |

### 3. Sorting Algorithms

| File | Description | Best Time | Average Time | Worst Time | Space | Stable |
| :--- | :--- | :---: | :---: | :---: | :---: | :---: |
| [`07_insertion_sort.c`](07_insertion_sort.c) | Adaptive in-place shift-insertion | $\mathcal{O}(n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Yes |
| [`08_bubble_sort.c`](08_bubble_sort.c) | Repeated adjacent element swapping | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | Yes |
| [`09_selection_sort.c`](09_selection_sort.c) | Minimum element selection & swap | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ | No |
| [`10_quick_sort.c`](10_quick_sort.c) | Divide-and-conquer partition sort | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(\log n)$ | No |
| [`17_merge_sort.c`](17_merge_sort.c) | Divide-and-conquer 2-way merge sort | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n)$ | Yes |

### 4. Stack Implementations & Applications

| File | Description | Time Complexity | Auxiliary Space |
| :--- | :--- | :---: | :---: |
| [`11_stack_traversal.c`](11_stack_traversal.c) | LIFO stack traversal from top to bottom | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| [`12_stack_push.c`](12_stack_push.c) | Push element onto stack with overflow guard | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`13_stack_pop.c`](13_stack_pop.c) | Pop top element from stack with underflow guard | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`21_postfix_evaluation.c`](21_postfix_evaluation.c) | Stack-based evaluation of Reverse Polish Notation (RPN) | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| [`22_infix_to_postfix.c`](22_infix_to_postfix.c) | Shunting-Yard algorithm converting infix expression to postfix | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |

### 5. Recursion & Divide-and-Conquer

| File | Description | Time Complexity | Stack Space |
| :--- | :--- | :---: | :---: |
| [`14_fibonacci_recursion.c`](14_fibonacci_recursion.c) | Recursive computation of the $n$-th Fibonacci term | $\mathcal{O}(2^n)$ | $\mathcal{O}(n)$ |
| [`15_factorial_recursion.c`](15_factorial_recursion.c) | Recursive $n!$ computation supporting 64-bit (`long long`) | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| [`16_tower_of_hanoi.c`](16_tower_of_hanoi.c) | Classical 3-peg recursive disk transference | $\mathcal{O}(2^n)$ | $\mathcal{O}(n)$ |

### 6. Queue Implementations

| File | Description | Time Complexity | Auxiliary Space |
| :--- | :--- | :---: | :---: |
| [`18_queue_insertion.c`](18_queue_insertion.c) | Linear queue enqueue operation with overflow check | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`19_queue_deletion.c`](19_queue_deletion.c) | Linear queue dequeue operation with underflow check | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| [`20_queue_traversal.c`](20_queue_traversal.c) | Sequential display of elements in queue order | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |

### 7. Singly Linked Lists

| File | Description | Time Complexity | Space |
| :--- | :--- | :---: | :---: |
| [`23_linked_list_insert_beginning.c`](23_linked_list_insert_beginning.c) | Allocate node and prepend to list head | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`24_linked_list_insert_end.c`](24_linked_list_insert_end.c) | Traverse to tail and append new node | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| [`25_linked_list_insert_position.c`](25_linked_list_insert_position.c) | Insert node at arbitrary 1-based index with boundary check | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| [`26_linked_list_delete_beginning.c`](26_linked_list_delete_beginning.c) | Unlink head node and reclaim dynamic memory | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`27_linked_list_delete_end.c`](27_linked_list_delete_end.c) | Traverse to second-to-last node and free tail | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| [`28_linked_list_delete_position.c`](28_linked_list_delete_position.c) | Delete node at 1-based index with pointer restitching | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |

### 8. Doubly Linked Lists

| File | Description | Time Complexity | Space |
| :--- | :--- | :---: | :---: |
| [`29_doubly_list_insertion.c`](29_doubly_list_insertion.c) | Insert node at beginning updating both `prev` and `next` | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ |
| [`30_doubly_list_traversal.c`](30_doubly_list_traversal.c) | Bidirectional list traversal (head-to-tail and tail-to-head) | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |

### 9. Graph Traversals

| File | Description | Time Complexity | Auxiliary Space | Graph Representation |
| :--- | :--- | :---: | :---: | :--- |
| [`31_bfs.c`](31_bfs.c) | Breadth-First Search using iterative queue | $\mathcal{O}(V^2)$ | $\mathcal{O}(V)$ | Adjacency Matrix |
| [`32_dfs.c`](32_dfs.c) | Depth-First Search using call-stack recursion | $\mathcal{O}(V^2)$ | $\mathcal{O}(V)$ | Adjacency Matrix |

---

## 🚀 Compilation & Execution

### Prerequisites

You need a standard C compiler supporting C99 or later:
- **GCC**: `gcc --version`
- **Clang / Apple LLVM**: `clang --version`
- **MSVC / MinGW** (Windows): `gcc --version` or `cl.exe`

### Compile and Run a Single Program

Compile any program using standard compiler flags:

```bash
# Compile with all warnings enabled
gcc -Wall -Wextra -O2 06_binary_search.c -o binary_search

# Run the compiled binary
./binary_search
```

On Windows (Command Prompt / PowerShell):
```cmd
gcc -Wall -Wextra 06_binary_search.c -o binary_search.exe
binary_search.exe
```

### Batch Compilation Script

To verify or compile all 32 programs in one command:

```bash
# Verify compilation for every program in the directory
for file in *.c; do
    gcc -Wall -Wextra "$file" -o "${file%.c}.out" && echo "Compiled: $file"
done
```

To clean up all generated binaries:
```bash
rm -f *.out *.exe program
```

---

## 💡 Key Specifications & Usage Notes

1. **Searching & Sorting**:
   - [`06_binary_search.c`](06_binary_search.c) expects elements entered in **strictly ascending (sorted) order**.
2. **Graph Traversals ([`31_bfs.c`](31_bfs.c) & [`32_dfs.c`](32_dfs.c))**:
   - Vertices are indexed $0$ through $n - 1$.
   - Input is supplied as an $n \times n$ adjacency matrix where `1` denotes an edge and `0` denotes absence of an edge.
3. **Expression Processing**:
   - [`21_postfix_evaluation.c`](21_postfix_evaluation.c) accepts postfix expressions with single-digit numeric operands and operators `+`, `-`, `*`, `/`.
   - [`22_infix_to_postfix.c`](22_infix_to_postfix.c) converts alphanumeric infix expressions to postfix with support for parentheses and operators `+`, `-`, `*`, `/`, `^` adhering to standard precedence rules and right-associativity for `^`.
4. **Memory Hygiene**:
   - Dynamic linked list operations allocate heap memory via `malloc(sizeof(struct node))` and deallocate unused memory via `free()` to prevent leaks.
5. **Recursion Boundaries**:
   - [`15_factorial_recursion.c`](15_factorial_recursion.c) uses `long long` integers, supporting computations up to $n = 20$ before integer overflow occurs.
   - [`16_tower_of_hanoi.c`](16_tower_of_hanoi.c) is bound between $1 \le n \le 10$ disks to ensure interactive execution times.

---

## 📐 Code Style & Standards

All programs in this repository adhere to standard C development guidelines:
- **Consistent Indentation**: 4 spaces per block level.
- **Readable Operators**: Symmetric spacing around arithmetic, relational, and assignment operators.
- **Single Responsibility per Line**: Every statement and control structure resides on its own line.
- **Defensive Input Handling**: Safe buffer specifiers (such as `%99s`) are utilized in string inputs to mitigate buffer overruns.

---

## 📄 License

This repository is licensed under the [MIT License](LICENSE) — feel free to use, modify, and reference these implementations for academic, instructional, or competitive programming purposes.
