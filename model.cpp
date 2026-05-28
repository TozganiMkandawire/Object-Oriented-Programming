#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char *name;
    int age;

public:
    Person(int age, char *name) {
        this->age = age;

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    ~Person() {
        delete[] name;
    }

    void PrintPerson() {
        cout << "My age is " << age << endl;
        cout << "My name is " << name << endl;
    }
};

class Student : public Person {
private:
    char *major;

public:
    Student(int age, char *name, char *major)
        : Person(age, name) {

        this->major = new char[strlen(major) + 1];
        strcpy(this->major, major);
    }

    ~Student() {
        delete[] major;
    }

    void PrintStudent() {
        PrintPerson();
        cout << "My major is " << major << endl;
    }
};

int main() {
    Student s1(20, (char*)"John", (char*)"Computer Science");

    s1.PrintStudent();

    return 0;
}