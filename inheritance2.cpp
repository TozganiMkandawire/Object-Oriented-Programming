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
};
class Derived : public Base{
    public:void SetBasenum(int n1, int n2, int n3){
        Base_protected = n2;
        Base_public = n3;
    }
};
int main(){
    Base base;
    base.Base_public = 3;

}