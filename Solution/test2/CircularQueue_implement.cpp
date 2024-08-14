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
private:
    T* queue;      // array for queue elements
    int front,     // one counterclockwise from front
        rear,      // array position of rear element
        capacity;  // capacity of queue array
};

template<class T>
Queue<T>::Queue(int queueCapacity):capacity(queueCapacity){
    if(capacity<1)
        throw "Queue capacity must be > 0.";
    queue = new T[capacity];
    front = rear = 0;
}

template<class T>
inline bool Queue<T>::IsEmpty()const{
    return front==rear;
}

template<class T>
inline T& Queue<T>::Front()const{
    if(IsEmpty())
        throw "Queue is empty. No front element.";
    return queue[(front+1)%capacity];
}

template<class T>
inline T& Queue<T>::Rear()const{
    if(IsEmpty())
        throw "Queue is empty. No front element.";
    return queue[rear];
}

template<class T>
void Queue<T>::Push(const T& x){ // Add x at rear of queue
    if((rear+1)%capacity==front){ // queue full, double capacity
        // code to double queue capacity comes here
        T* newQueue = new T[2*capacity];
        // copy from queue to newQueue
        int start = (front+1)%capacity;
        if(start<2){
            // no wrap around
            copy(queue+start, queue+capacity, newQueue);
            copy(queue, queue+rear+1, newQueue+capacity-start);
        }
        // switch to newQueue
        front = 2*capacity-1;
        rear = capacity-2;
        capacity*=2;
        delete[] queue;
        queue = newQueue;
    }
    rear = (rear+1)%capacity;
    queue[rear] = x;
}

template<class T>
void Queue<T>::Pop(){ // Delete front element from queue
    if(ISEmpty())
        throw "Queue is empty. Connot delete.";
    front = (front+1)%capacity;
    queue[front].~T(); // destructor for T
}