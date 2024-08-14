# Circle

以下為一個長方形的類別以及實作細節，請根據 class 語法實作一個圓形的類別。

```cpp
#include <iostream>
using namespace std;

class Rectangle {
   private:
    int width;
    int height;
    int area;

   public:
    Rectangle(int w, int h);
    ~Rectangle();
    int getWidth() { return width; }
    int getHeight() { return height; }
    int getArea() { return area; }
};
Rectangle::Rectangle(int w, int h) : width(w), height(h) { area = w * h; }
Rectangle::~Rectangle() {}

int main() {
    Rectangle A(10, 20);
    cout << A.getArea() << "\n";
    return 0;
}
```

## 要求

1. 要有半徑跟面積兩個私有（Private）變數成員。
2. 要有取得半徑跟面積的兩公有（Public）函數成員。

## 輸入

每一行有一數字 _radius_，輸入直到 EOF (End of File)。

## 輸出

依據每行輸入之半徑，建立圓形類別並輸出面積。

### Example Input

> [!IMPORTANT]
>
> 1. 請注意型別，圓周率以 `<math.h>` 中的 `M_PI` 為主。
> 2. 請注意測資格式的最後一行的換行。

```plain
12
10

```

### Example Output

```plain
452.389
314.159

```
