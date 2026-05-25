#include <iostream>
using namespace std;

class Time {
private:
    int hour; //0-23
    int minute; //0-59
    int second; //0-59
public:
    Time(int hour, int minute, int second){
        this->hour = (hour >= 0 && hour < 24) ? hour : 0;
        this->minute = (minute >= 0 && minute < 59) ? minute : 0;
        this->second = (second >= 0 && second < 59) ? second : 0;
    }
    void printTime() {
        cout << hour << " : " << minute << " : " << second << endl;
    }
};

int main(void){
    Time lunchTime(12,30,20);
    lunchTime.printTime();
}