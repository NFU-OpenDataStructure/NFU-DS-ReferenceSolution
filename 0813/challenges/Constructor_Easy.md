# Constructor Practice

tag: Constructors

Given a `People` class that encapsulates an integer ID, implement the class to initialize the ID using a constructor. The class should provide methods to change and display the ID.

## Input

> [!IMPORTANT]  
> Please be aware of the attribute, member function, or constructor privilege of a class.

The class `People` has:

- A **public** constructor `People(int init_id)` that initializes the ID.
- A **public** method `change_id(int payload)` that changes the ID to the given payload.
- A **public** method `show_id()` that displays the current ID.
- A **private** attribute `id` that holds object information about its ID.

### Technical Specification

- The constructor `People(int init_id)` should initialize the `id` variable.
- The method `change_id(int payload)` should update the `id` variable with the new value.
- The method `show_id()` should output the current `id` to the console.

## Output

- The `show_id()` method should output the current `id` value.

### Sample Input

```cpp
int main() {
    People john = People(200);
    john.show_id();

    john.change_id(3000);
    john.show_id();
}
```

Here's explanation:

1. The `People` object `john` is initialized with an ID of 200.
2. The `show_id()` method is called, outputting 200.
3. The `change_id()` method updates the ID to 3000.
4. The `show_id()` method is called again, outputting 3000.

### Sample Output

```shell
$ g++ -O2 -std=c++23 main.cpp -o constructor && ./constructor
200
3000
```
