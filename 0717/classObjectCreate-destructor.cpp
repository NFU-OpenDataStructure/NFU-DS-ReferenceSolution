// 一般類別物件的建立
#include <iostream>
#include <string>

using namespace std;

class Account {
   public:
    string id;
    string name;
    double balance;

    // 建構子
    Account(string id, string name, double balance) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    // 自定義解構子的實作細節
    ~Account() {
        cout << "Calling desturctor.\n";
    }
};

int main() {
    Account acc1("I Love", "Rick", 48);
    Account acc2("Furry", "Roll", 763);

    cout << acc1.id << " " << acc1.name << " " << acc1.balance << "\n";
    cout << acc2.id << " " << acc2.name << " " << acc2.balance << "\n";
}

// 當程式結束時，類別變數離開生命週期，因此會看到由解構子拋出的 "Calling desturctor." 訊息
