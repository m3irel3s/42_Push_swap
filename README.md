# 🔄 **Push Swap**

## 🔍 Overview

Push Swap is an algorithmic project that requires implementing a sorting algorithm using a restricted set of stack operations. The goal is to efficiently sort a list of numbers using two stacks (A and B) while following strict rules on allowed operations. The challenge is to optimize the sorting process by minimizing the number of operations, especially for 100 and 500 number cases.

## 🛠 Features

Sorting Algorithm: Implements an optimized sorting algorithm using chunk sorting to arrange numbers in ascending order with minimal moves.

**Stack-Based Operations:** Utilizes a limited set of operations to manipulate two stacks:

- sa, sb, ss – Swap the top two elements of a stack.

- pa, pb – Push the top element from one stack to another.

- ra, rb, rr – Rotate a stack upwards.

- rra, rrb, rrr – Rotate a stack downwards.

**Chunk Sorting Approach:**

- The list is divided into smaller chunks based on its size.

- Elements are pushed to Stack B in a structured manner to facilitate easy retrieval.

- The optimal chunk divisor is determined based on the number of elements:

  - **500+ elements** → Divided into 9 chunks

  - **100 or fewer elements** → Divided into 6 chunks

  - **5 or fewer elements** → Divided into 3 chunks

- **Handles Edge Cases:** Supports duplicate checks, error handling for invalid inputs, and efficient sorting of small and large datasets.

- **Performance Focused:** Strives for the best possible number of moves, especially for lists of 100 and 500 numbers.

## ⚙️ Functionality

1. **Parsing Input:** Reads and validates the input to ensure it contains only valid integers and no duplicates.

2. **Sorting Process:**

- If a small number of elements (e.g., 3), uses a hardcoded optimal approach.

- If a larger number (e.g., 100 or 500), applies chunk sorting:

  - The list is divided into chunks based on size.

  - Numbers are pushed to Stack B in an order that facilitates easier sorting.

  - Once sorted, elements are pushed back to Stack A in the correct order.

- **Operations Execution:** Executes the necessary push, swap, and rotate operations in an optimized sequence.

- **Output the Solution:** Prints the minimal set of operations needed to achieve the sorted order.

## 📊 Performance Example

For reference, here are the results for sorting 100 and 500 random numbers:

- **100 numbers:** Approximately 600-650 operations

- **500 numbers:** Approximately 5300-6000 operations


## 💡 Inspiration

Push Swap was a fascinating project that deepened my understanding of sorting algorithms, stack data structures, and algorithm optimization. It reinforced the importance of efficient problem-solving and taught me how to work within strict constraints, making it a valuable learning experience in algorithmic thinking.
