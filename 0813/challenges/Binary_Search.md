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

Input

```shell
輸入測資數：1
輸入長度：5
輸入陣列：5 4 3 2 1
arr = {1, 2, 3, 4, 5}
輸入找尋的資料：5
```

Output

```shell
找到在元素在 arr[4]
```

### Sample I/O 2

Input

```shell
輸入測資數：3
輸入長度：5
輸入陣列：5 4 3 2 1
arr = {1, 2, 3, 4, 5}
輸入找尋的資料：5

輸入長度：1
輸入陣列：0
arr = {0}
輸入找尋的資料：1

輸入長度：3
輸入陣列：2 9 1
arr = {1, 2, 9}
輸入找尋的資料：2
```

Output

```shell
找到在元素在 arr[4]
Not Found
找到在元素在 arr[1]
```
