#include <iostream>
using namespace std;

class Basic{
private:
    static int static_num;
    int class_num;
public:
    Basic(){
        class_num = static_num++;
    }

    void Print(){
        cout << static_num << " " << class_num << endl;
    }
};
int Basic::static_num = 0;
int main(void){
    Basic basic1;
    Basic basic2;
    Basic basic3;

    basic1.Print();
    basic2.Print();
    basic3.Print();
}

