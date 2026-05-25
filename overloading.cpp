#include <iostream>

void adder(int a, int b){
    std::cout<<a+b<<std::endl;

}

void adder(int a, int b, int c){
    std::cout<<a+b+c<<std::endl;

}

int main(void){
    adder(5,10);
    adder(5,10,20);
}
