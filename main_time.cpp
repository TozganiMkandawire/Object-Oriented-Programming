#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

int main(void){
    Time lunchTime;
    Time dinnerTime;

    lunchTime.setTime(12,10,20);

    dinnerTime.setTime(30,70,80);

    cout <<"Lunch will be held at ";
    lunchTime.printTime();
    cout << endl;

    cout <<"Dinner will be held at ";
    dinnerTime.printTime();
    cout << endl;

}