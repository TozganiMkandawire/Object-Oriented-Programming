#include <iostream>
using namespace std;

class Default {
private:
    int num;

public:
    // Default constructor
    Default() {
        num = 0;
    }

    // setter function
    void set(int num) {
        this->num = num;
    }

    void display() {
        cout << "Num: " << num << endl;
    }
};

int main() {
    Default obj;   // default constructor is called

    obj.display(); // shows initial value (0)

    obj.set(25);   // setting new value
    obj.display(); // shows updated value

    return 0;
}