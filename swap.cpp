#include <iostream>

using namespace std;
void swap (int &num1, int &num2){
    int tmp=num1;
    num1=num2;
    num2=tmp;
}

int main(void){
    int n1=10;
    int n2=20;

    swap(n1,n2);

    cout<<n1<<'\t'<<n2<<endl;
}