#include <iostream>

using namespace std;

class People {
   public:
    void change_id(int payload);
    void show_id();
    People(int init_id);

   private:
    int id;
};

People::People(int init_id) : id(0) { this->id = init_id; }
void People::change_id(int payload) { this->id = payload; };
void People::show_id() { cout << this->id << "\n"; }

int main() {
    People john = People(200);
    john.show_id();

    john.change_id(3000);
    john.show_id();
}