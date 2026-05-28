#include<iostream>

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

class Derived : publicBase{
    private:
    int Derived_Private
    public:
    Derived(){
        Derived_Private = 4;

    }

    void PrintDerived(){
        cout << Derived_private number : " << Derived_private" << endl;
    } 
};

void main(){
    Derived derived;
    derived.PrintBase();
    derived.PrintDerived();
}