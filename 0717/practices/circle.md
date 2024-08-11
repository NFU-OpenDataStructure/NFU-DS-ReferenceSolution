# Class Example: Circle

參考範例程式：長方形的類別，請實作圓形的版本

```cpp
#include <iostream>
using namespace std;

class Rectangle{
private:
    int width;
    int height;
    int area;
public:
    Rectangle(int w, int h);
    ~Rectangle();
    int getWidth(){ return width; }
    int getHeight(){ return height; }
    int getArea(){ return area; }
};
Rectangle::Rectangle(int w, int h):width(w), height(h){
    area = w*h;
}
Rectangle::~Rectangle(){
}

int main(){
    Rectangle A(10, 20);
    cout<<A.getArea()<<"\n";
    return 0;
}
```

### 要求

1. 要有半徑跟面積兩個私有變數成員。
2. 要有取得半徑跟面積的兩公有函數成員。

## 輸入

每一行有一數字 *radius*，輸入直到EOF (End of File)。

##  輸出

依據每行輸入之半徑，建立圓形類別，並輸出面積。

> [!IMPORTANT]  
> 請注意型別，圓周率以 `<math.h>` 中的 `M_PI` 為主

### Example Input

```plain
12
10

```

### Output

```
452.389
314.159

```
