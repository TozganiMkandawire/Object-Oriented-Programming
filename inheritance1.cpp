#include<iostream>
using namespace std; 

class Base{
private:
    int Base_private;

public:
    Base(){
    Base_private =1;
}
void PrintBase(){
     cout << "Base_private number : " << Base_private << endl;

}
};

class Derived : public Base{
    private:
    int Derived_Private;
    public:
    Derived(){
        Derived_Private = 4;

    }

    void PrintDerived(){
        cout << "Derived_private number : " << Derived_Private << endl;
    } 
};

int main(void){
    Derived derived;
    derived.PrintBase();
    derived.PrintDerived();
}