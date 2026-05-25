#include <iostream>
using namespace std;

class Array {
private:
    int *array;
    int size;

public:
    Array(int size) {
        this->size = size;
        array = new int[size];
        cout << "Array created with size " << size << endl;
    }

    ~Array() {
        delete[] array;
        cout << "Array memory deleted" << endl;
    }

    void setValues() {
        for (int i = 0; i < size; i++) {
            cout << "Enter value for index " << i << ": ";
            cin >> array[i];
        }
    }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Array obj(5);

    obj.setValues();
    obj.display();

    return 0;
}