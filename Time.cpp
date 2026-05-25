#include <iostream>
using std::cout;
using std::endl;

#include "Time.h"

//member function definition
void Time::printTime(){
    cout << hour << " : " << minute << " : " << second;
}
// member function definition
void Time::setTime(int Hour, int Minute, int Second){
    hour = (Hour >= 0 && Hour < 24) ? Hour : 0;
    minute = (Minute >= 0 && Minute < 59) ? Minute : 0;
    second = (Second >= 0 && Second < 59) ? Second : 0;
}
