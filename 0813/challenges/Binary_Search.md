# Binary Search

tag: Binary Search

Given a sorted array of integers `arr` and a target value `target`, design a program using the binary search algorithm to find the position of `target` in the array. If `target` exists in the array, return its index; otherwise, return -1 to indicate that the target value is not in the array.

## Input

- A sorted array of integers `arr`.
- An integer `target`, representing the value to search for.

### Technical Specification

- The length of the array `arr` is $n$, where $1 \le n \le 10^5$.
- Each element in the array satisfies $1 \le arr[i] \le 10^9$.

## Output

- If `target` exists in the array, return its index (0-based).
- If `target` does not exist in the array, return -1.

### Sample I/O 1

```cpp
Input: arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}, target = 5
Output: 4
```

### Sample I/O 2

```cpp
Input: arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}, target = 10
Output: -1
```
