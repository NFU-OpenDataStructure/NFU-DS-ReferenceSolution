# 暑修 資料結構(一) Test 2 參考解答

### What are the mertis of using **iterators** in a data structure? `[10%]`
方便遍歷結構、節省程式碼長度，以及增加程式可讀性。

### What arw the advatanges of using **Last** pointer to a circular chain? `[10%]`
新增新元素的時間複雜度降到O(1)。

### Chain 與 ChainNode 定義如`Figure 1 `所示: `[30%]`
```cpp
// Figure 1 Template definition of Chain
template<class T> class Chain; // forward declaration

template<class T>
class ChainNode{
friend class Chain<T>;
private:
    T data;
    ChainNode<T> *link;
};

template<class T>
class Chain{
public:
    Chain(){first=0;}; //constructor initializing first to 0
    // Chain manipulation operations
    .
    .
private:
    ChainNode<T> *first;
};
```
#### `(1)` 請實作下列 constructors for class ChainNode `[15%]`
```cpp
ChainNode(){}
ChainNode(const T& data)
ChainNode(const T& data, ChainNode<T> *link)
```
參見 `ChainNode_constructors.cpp`

#### `(2)` 請實作一般的Link list:應包含IndexOf、Delete、Insert等基本操作； `[15%]`
參見 `linkedList_implement.cpp`

### Circular queue, How to distinguish between **a full queue** and **an empty queue**? `[10%]`
當rear與front相等時，即頭尾相等時，為empty queue; <br>
當(rear+1)%capacity與front相等時，則為full queue。

### 請使用 Circular List with Header node 來實作 Linked Stack and Queue，如下所示:Stack and Queue 的 ADT 如`Figure 2`所示: `[20%]`
```cpp
// Figure 2-1 Abstract datatype Stack
template<class T>
class Stack
{ // A finite ordered list with zero or more elements.
public:
    Stack(int stackCapacity=10);
    // Create an empty stack whose initial capacity is stackCapacity.

    bool IsEmpty()const;
    // If number of elements in the stack is 0, return true else return false

    T& Top()const;
    // Return top element of stack.

    void Push(const T& item);
    // Insert item into the top of the stack.

    void Pop();
    // Delete the top element of the stack.
};
```
```cpp
// Figure 2-2 Abstract datatype Queue
template<class T>
class Queue
{ // A finite ordered list with zero or more elements.
public:
    Queue(int queueCapacity=10);
    // Create an empty queue whose initial capacity is queueCapacity

    bool IsEmpty()const;
    // If number of element in the queue is 0, return true else return false

    T& Front()const;
    // Return the element at the front of the queue.

    T& Rear()const;
    // Return the element at the rear of the queue.

    void Push(const T& item);
    // Insert item at the rear of the queue.

    void Pop();
    // Delete the front element of the queue.
};
```
參見 `CircularQueue_implement.cpp`，stack差不多，可以參照queue版本更改。

### Using the data structure of Matrix (`Figure 3`), show the representation following sparse matrix: `[20%]`
|  |  |  |  |
| :--: | :--: | :--: | :--: |
| 2 | 0 | 0 | 0 |
| 4 | 0 | 0 | 3 |
| 0 | 0 | 3 | 0 |
| 8 | 0 | 0 | 1 |
| 0 | 0 | 6 | 0 | 
5X4
```cpp
// Figure 3 Class definitions for sparse matrices
struct Triple{int row, col, value;};
class Matrix; // forward declaration
class MatrixNode{
friend class Matrix;
friend istream& operator>>(istream&, Matrix&); // for reading in a matrix
private:
    MatrixNode *down, *right;
    bool head;
    union {
        MatrixNode *next;
        Triple triple;
    };
    MatrixNode(bool b, Triple* t); // constructor
};
MatrixNode::MatrixNode(bool b, Triple* t) // constructor
{
    head = b;
    if(b){right=down=this;} // row/column header node
    else triple = *t; // element node or header node for list of header nodes
}
class Matrix{
friend istream& operator>>(istream&, Matrix&);
public:
    ~Matrix(); //destructor
private:
    MatrixNode *headnode;
};
```
參考課本p218或講義Chap 4-4 ppt的4-32投影片