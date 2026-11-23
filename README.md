<div align="center">

# ⚡ Data Structures & Algorithms in C ⚡

<a href="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=24&pause=1000&color=00F5D4&center=true&vCenter=true&width=600&lines=Mastering+Core+Computer+Science+Concepts;Interactive+and+Clean+C+Implementations;From+Linked+Lists+to+Graph+Traversals;Optimized+Algorithms+%26+Data+Structures">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=24&pause=1000&color=00F5D4&center=true&vCenter=true&width=600&lines=Mastering+Core+Computer+Science+Concepts;Interactive+and+Clean+C+Implementations;From+Linked+Lists+to+Graph+Traversals;Optimized+Algorithms+%26+Data+Structures" alt="Typing SVG" />
</a>

<p align="center">
  <img src="https://img.shields.io/badge/Language-C99-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C Language" />
  <img src="https://img.shields.io/badge/Standard-POSIX-black?style=for-the-badge&logo=gnubash&logoColor=white" alt="POSIX" />
  <img src="https://img.shields.io/badge/Status-Active%20Repository-success?style=for-the-badge" alt="Status" />
  <img src="https://img.shields.io/github/repo-size/somansinghal/DSA?style=for-the-badge&color=blueviolet" alt="Repo Size" />
  <img src="https://img.shields.io/github/license/somansinghal/DSA?style=for-the-badge&color=orange" alt="License" />
</p>

---

<p align="center">
  <b>A comprehensive, clean, and modular collection of classic Data Structures & Algorithms implemented from scratch in pure C.</b><br>
  Designed for learning, viva preparation, and deep computer science fundamental mastery.
</p>

</div>

<br>

## 📑 Table of Contents

- [✨ Features](#-features)
- [📂 Repository Structure & Modules](#-repository-structure--modules)
- [⏱️ Complexity Cheat Sheet](#️-complexity-cheat-sheet)
- [🚀 Quick Start & Compilation](#-quick-start--compilation)
- [🛠️ How to Compile & Run](#️-how-to-compile--run)
- [🤝 Contributing & License](#-contributing--license)

---

## ✨ Features

- 🎯 **Pure C Implementations:** Low-level memory management and pointer manipulations without third-party libraries.
- ⚡ **Interactive CLI Programs:** Menu-driven execution for Linked Lists, Stacks, Queues, and Matrices.
- 🧠 **Conceptual Breadth:** Covers foundational sorting & searching, linear & doubly linked lists, expression conversion, tree traversals, recursion, and graph exploration (BFS & DFS).
- 🧼 **Clean & Readable:** Written to be easily understood for university coursework, lab exams, and technical interviews.

---

## 📂 Repository Structure & Modules

```ascii
.
├── 📊 Arrays & Matrices
│   └── matrix.c            # Matrix arithmetic, row/column operations & manipulations
├── 🔗 Linked Lists
│   ├── insertion_list.c    # Singly linked list (insertion at beginning, end, and position)
│   ├── deletion_list.c     # Singly linked list (deletion operations & node management)
│   └── doubly_list.c       # Doubly linked list (two-way pointer traversal & manipulation)
├── 📚 Stacks & Queues
│   ├── stack.c             # Stack implementation with overflow/underflow checks
│   ├── queue.c             # Linear Queue & Circular Queue operations (Enqueue, Dequeue)
│   └── expression.c        # Infix to Postfix expression conversion & evaluation
├── 🔍 Searching Algorithms
│   └── search.c            # Linear Search & Binary Search
├── 🔀 Sorting Algorithms
│   ├── sorting.c           # Bubble Sort & Selection Sort
│   ├── sort4.c             # Insertion Sort & Merge Sort
│   └── quick.c             # Quick Sort using partition strategy
├── 🌲 Trees & Graphs
│   ├── tree.c              # Binary Tree creation & traversals (Inorder, Preorder, Postorder)
│   ├── bfs.c               # Breadth-First Search on graphs using queues
│   └── dfs.c               # Depth-First Search on graphs using recursion / adjacency matrix
└── 🔁 Recursion
    └── recursion.c         # Classic recursive problems (Factorial, Fibonacci, Tower of Hanoi)
```

---

## ⏱️ Complexity Cheat Sheet

| Category | File | Algorithm / Data Structure | Time Complexity (Avg) | Time Complexity (Worst) | Space Complexity |
| :--- | :--- | :--- | :---: | :---: | :---: |
| **Search** | [`search.c`](./search.c) | Linear Search | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| | | Binary Search | $\mathcal{O}(\log n)$ | $\mathcal{O}(\log n)$ | $\mathcal{O}(1)$ |
| **Sort** | [`sorting.c`](./sorting.c) | Bubble Sort | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ |
| | | Selection Sort | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ |
| | [`sort4.c`](./sort4.c) | Insertion Sort | $\mathcal{O}(n^2)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(1)$ |
| | [`quick.c`](./quick.c) | Quick Sort | $\mathcal{O}(n \log n)$ | $\mathcal{O}(n^2)$ | $\mathcal{O}(\log n)$ |
| **Lists** | [`insertion_list.c`](./insertion_list.c) | Singly Linked List Insert | $\mathcal{O}(1)$ to $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| | [`deletion_list.c`](./deletion_list.c) | Singly Linked List Delete | $\mathcal{O}(1)$ to $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| | [`doubly_list.c`](./doubly_list.c) | Doubly Linked List Operations | $\mathcal{O}(1)$ to $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| **Linear** | [`stack.c`](./stack.c) | Stack (Push / Pop / Peek) | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ |
| | [`queue.c`](./queue.c) | Queue (Enqueue / Dequeue) | $\mathcal{O}(1)$ | $\mathcal{O}(1)$ | $\mathcal{O}(n)$ |
| **Non-Linear**| [`tree.c`](./tree.c) | Binary Tree Traversals | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ | $\mathcal{O}(h)$ |
| | [`bfs.c`](./bfs.c) | Breadth-First Search | $\mathcal{O}(V + E)$ | $\mathcal{O}(V^2)$ | $\mathcal{O}(V)$ |
| | [`dfs.c`](./dfs.c) | Depth-First Search | $\mathcal{O}(V + E)$ | $\mathcal{O}(V^2)$ | $\mathcal{O}(V)$ |

---

## 🚀 Quick Start & Compilation

### Prerequisites

Ensure you have a C compiler installed (`gcc` or `clang`):

```bash
# Check GCC installation
gcc --version

# On Ubuntu/Debian:
sudo apt update && sudo apt install build-essential

# On macOS:
xcode-select --install
```

---

## 🛠️ How to Compile & Run

### 1. Clone the repository
```bash
git clone https://github.com/somansinghal/DSA.git
cd DSA
```

### 2. Compile any program
Using `gcc` with standard flags:
```bash
gcc -Wall -Wextra -O2 bfs.c -o bfs
```

### 3. Run the executable
```bash
./bfs
```

> **Tip:** You can compile and run any other module similarly:
> ```bash
> gcc quick.c -o quick && ./quick
> gcc tree.c -o tree && ./tree
> gcc doubly_list.c -o doubly_list && ./doubly_list
> ```

---

## 🤝 Contributing

Contributions, issues, and feature requests are welcome!
Feel free to check out the [issues page](https://github.com/somansinghal/DSA/issues) if you want to contribute new algorithms or optimizations.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingAlgorithm`)
3. Commit your Changes (`git commit -m 'Add some AmazingAlgorithm'`)
4. Push to the Branch (`git push origin feature/AmazingAlgorithm`)
5. Open a Pull Request

---

<div align="center">

⭐ **If you find this repository helpful, consider giving it a star!** ⭐

Crafted with ❤️ by [Soman Singhal](https://github.com/somansinghal)

</div>
