#include<iostream>
using namespace std; 
class Base{
private:
    int Base_private;
protected:
     int Base_protected;
public:
    int Base_public;
    void SetBasenum(int n1, int n2, int n3){
        Base_private = n1;
        Base_protected = n2;
        Base_public = n3;
    }
}:
class Derived : public Base{
    public:void SetBasenum(int n1, int n2, int n3){
        Base_private = n1;// compilation error
        Base_protected = n2; // correct cause class is derived
        Base_public = n3; //correct cause class is derived
    }
};
void  main(){
    Base base;
    base.Base_private = 1; //compilation error
    base.Base_protected = 2;//compilation error
    base.Base_public = 3; // can access only public member data
}