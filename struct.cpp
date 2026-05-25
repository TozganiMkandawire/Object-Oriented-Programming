#include <iostream>
using namespace std;

struct Time {
    int hour; //0-23
    int minute; //0-59
    int second; //0-59
};

void printTime(Time t){
    cout << t.hour << " :" << t.minute << " : " << t.second << endl;
}
int main(void){
    Time lunchTime;
    Time dinnerTime = {18, 30, 0};
    Time *ptrTime = &lunchTime;

    lunchTime.hour = 12;
    ptrTime->minute = 30;
    (*ptrTime).second = 20;

    cout << "Lunch will be held at ";
    printTime(lunchTime);

    cout << "Dinner will be held at ";
    printTime(dinnerTime);

}