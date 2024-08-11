// 一般類別物件的建立
#include <iostream>
#include <string>

using namespace std;

class Account {
   public:
    string id;
    string name;
    double balance;

    // 自定義建構子
    Account(string id, string name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
};

int main() {
    // 使用建構子建立類別物件
    Account acc1("I Love", "Rick", 48);
    Account acc2("Furry", "Roll", 763);

    // 索引類別成員內容
    cout << acc1.id << " " << acc1.name << " " << acc1.balance << "\n";
    cout << acc2.id << " " << acc2.name << " " << acc2.balance << "\n";
}
