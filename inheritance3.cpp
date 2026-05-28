#include <iostream>
using namespace std;

class Base {
protected:
    int Base_num;

public:
    Base() {
        cout << "Constructor of base class" << endl;
        Base_num = 1;
    }

    Base(int n1) {
        cout << "Constructor of base class" << endl;
        Base_num = n1;
    }
};

class Derived : public Base {
private:
    int Derived_num;

public:
    Derived(int n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n1;
    }

    Derived(int n1, int n2) : Base(n1) {
        cout << "Constructor of derived class" << endl;
        Derived_num = n2;
    }
};

int main() {
    Derived *ptr1 = new Derived(2);
    Derived *ptr2 = new Derived(1, 2);

    delete ptr1;
    delete ptr2;

    return 0;
}