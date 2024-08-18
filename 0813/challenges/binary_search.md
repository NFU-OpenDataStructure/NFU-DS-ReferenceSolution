# Binary Search

二分搜尋法

## Abstract Data Type

> [!NOTE]  
> 課本第 28 頁。

```plain
int BinarySearch(int *a, const int x, const int n)
{//Search the sorted array a[0], ..., a[n-1] for x
    while(there are more elements)
    {
        Let middle be the middle element;
        if (x < a[middle]) set right to middle-1;
        else if (x > a[middle]) set left to middle+1;
        else return middle;
    }
    Not found;
}
```

## Implementation

View the source code [here](./main.cpp).

### Dependensices

```cpp
#include <algorithm>
#include <iostream>
```

### Global Variables

```cpp
int arr[] = {3, 2, 1, 4, 5, 8, 9, 7, 6};
int n = sizeof(arr) / sizeof(arr[0]);
```

### Functions

- `binary_search()`

  ```cpp
  void binary_search() {
      int target;
      cout << "輸入找尋的資料：";
      cin >> target;

      int left = 0;
      int right = n;
      int middle;

      while (left <= right) {
          middle = (left + right) / 2;

          if (target > arr[middle]) {
              left = middle + 1;
          } else if (arr[middle] < target) {
              right = middle - 1;
          } else {
              cout << "找到在元素在 arr[" << middle << "]\n";
              break;
          }
      }

      if (arr[middle] != target) cout << "Not Found\n";
  }
  ```

- `main()`

  ```cpp
  int main() {
      sort(arr, arr + n);
      cout << "arr = {";
      for (auto i : arr) cout << i << ((i == arr[n - 1]) ? "" : ", ");
      cout << "}\n";
      binary_search();
  }
  ```

## Run

### Compile Parameter

```shell
g++ -O2 main.cpp
```

### Output

```shell
arr = {1, 2, 3, 4, 5, 6, 7, 8, 9}
輸入找尋的資料：5
找到在元素在 arr[4]
```
