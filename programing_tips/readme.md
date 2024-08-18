# Input
- Ex Ackermann  
每一行有兩個數字 $m$ 跟 $n$，輸入到 EOF (End of File)。  
Example input
    ```plain
    1 1
    3 2
    3 5
    2 1

    ```
    ```cpp
    // 輸入直到EOF可以使用while(cin>>變數)來解
    while(cin>>m>>n){
        ...
    }
    ```

- Ex Parentheses Balance  
    The file contains a positive integer n and a sequence of n strings of parentheses `()`, `[]` and `{}`, one string a line.  
    Example input
    ```plain
    3
    ([])
    (([()])))
    ([()[]()])()

    ```
    ```cpp
    // 先輸入有幾個case的，可以用while(變數--)解
    int cases=0;
    cin>>cases;
    while(cases--){
        string str;
        cin>>str;
        ...
    }
    ```
- 簡單陣列操作
    第一行有一數字 $N$，且接著會有 $N$ 行，每行以數字 $S$ 開頭，並緊接著 $S$ 個數字 $A_0 \sim A_{s-1}$ 。要求輸出陣列 $A$ 的反轉。  
    Example input
    ```plain
    3
    5 1 5 4 6 8
    3 5 1 8
    7 5 4 6 7 2 1 3

    ```
    ```cpp
    int cases=0, size=0;
    cin>>cases;
    while(cases--){
        cin>>size;
        int* array = new int[size];
        for(int i=0; i<size; i++){
            cin>>array[i];
        }
        ...
    }
    ```

