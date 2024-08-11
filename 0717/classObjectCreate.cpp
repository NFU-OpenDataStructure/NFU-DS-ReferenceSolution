// 一般類別物件的建立
#include <iostream>
#include <string>

using namespace std;

class Account {
   public:
    string id;
    string name;
    double balance;
};

int main() {
    Account acc1;
    acc1.id = "I Love";
    acc1.name = "Rick";
    acc1.balance = 48;

    Account acc2;
    acc2.id = "Furry";
    acc2.name = "Roll";
    acc2.balance = 763;

    // 物件的成員內容索引
    cout << acc1.id << " " << acc1.name << " " << acc1.balance << "\n";
    cout << acc2.id << " " << acc2.name << " " << acc2.balance << "\n";
}
