#include <iostream>
#include <cstring>
using namespace std;

class Person {
private:
    char *name;
};

class Student : public Person {
private:
    char *major;
};

class ScholarshipStudent : public Student {
private:
    int scholarship;
};