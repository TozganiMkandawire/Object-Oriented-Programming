#include <stdio.h>
#include <string.h>
#include <stdlib.h>

class Person {
private:
    char name[50];
    int studentID;
    int age;

public:
    void init(const char* inputName, int inputID, int inputAge) {
        strcpy(name, inputName);
        studentID = inputID;
        age = inputAge;
    }

    void printStudentInfo() {
        printf("Name: %s, ID: %d, Age: %d\n", name, studentID, age);
    }

    int getID() { return studentID; }
    int getAge() { return age; }
    const char* getName() { return name; }
};

void personSwap(Person& a, Person& b) {
    Person temp;
    temp.init(a.getName(), a.getID(), a.getAge());
    a.init(b.getName(), b.getID(), b.getAge());
    b.init(temp.getName(), temp.getID(), temp.getAge());
}

int main() {
    Person p1, p2;
    p1.init("Alice", 2026312345, 20);
    p2.init("Bob",   2019354321, 25);

    printf("Before Swap:\n");
    p1.printStudentInfo();
    p2.printStudentInfo();

    personSwap(p1, p2);

    printf("\nAfter Swap:\n");
    p1.printStudentInfo();
    p2.printStudentInfo();

    return 0;
}