#include <iostream>
#include <string>

using namespace std;

class Account {
   public:
    string id;       // 帳號
    string name;     // 名稱
    double balance;  // 餘額

    Account(){};  // 預設建構子

    Account(string id, string name, double balance = 0.0) {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
};

int main() {
    Account acct_1("Rick", "Mochizuki Anna", 8763);
    Account acct_2("Astley", "Tsuyuzaki Mahiru", 531);
}
