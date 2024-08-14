# 07/17 程式參考解答

1. [建構子](0717/constructor.cpp)
2. [建構子（第二種寫法）](0717/constructor_alternative.cpp)

## 範例程式

### Queue

```cpp
template <class T>
class Queue {  // A finite with zero or more elements.
   public:
    Queue(int queueCapacity = 10);
    // Create an empty queue whose initial capacity is queueCapacity.
    bool IsEmpty() const;
    // If number of elements in the queue is 0, return true else return false.
    T &Ftont() const;
    // Return the element at the front of the queue.
    T &Rear() const;
    // Return the element at the rear of the queue.
    void Push(const T &item);
    // Insert intem at the rear of the queue.
    void Pop();
    // Delete the front element of the queue.

   private:
    T *queue;      // Arrary for queue elements.
    int front      // One counterclockwise from front.
        rear,      // Array position of rear element.
        capacity;  // Capacity of queue array.
};
```

### Stack

```cpp
template <class T>
class Stack {  // A finite with zero or more elements.
   public:
    Stack(int StackCapacity = 10);
    // Create an empty stack whose initial capacity is stackCapacity.
    bool IsEmpty() const;
    // If number of elements in the stack is 0, return true else return false.
    T &Ftont() const;
    // Return the element at the front of the stack.
    void Push(const T &item);
    // Insert intem at the rear of the stack.
    void Pop();
    // Delete the front element of the stack.
    void Print();
    // Print all elements of the stack.

   private:
    T *stack;      // Arrary for stack elements.
    int capacity;  // Array position of rear element.
    int top;       // Capacity of stack elements of array.
};
```
