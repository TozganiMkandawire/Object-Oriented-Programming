#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time(int hour) {
        this->hour = (hour >= 0 && hour < 24) ? hour : 0;
        this->minute = 0;
        this->second = 0;
    }
    Time(int hour, int minute) {
        this->hour = (hour >= 0 && hour < 24) ? hour : 0;
        this->minute = (minute >= 0 && minute < 60) ? minute : 0;
        this->second = 0;
    }
    Time(int hour, int minute, int second) {
        this->hour = (hour >= 0 && hour < 24) ? hour : 0;
        this->minute = (minute >= 0 && minute < 60) ? minute : 0;
        this->second = (second >= 0 && second < 60) ? second : 0;
    }

    void printTime() {
        cout << hour << " : " << minute << " : " << second << endl;
    }
};

int main() {
    Time breakfastTime(7);
    Time lunchTime(12, 30);
    Time dinnerTime(18, 30, 40);

    breakfastTime.printTime();
    lunchTime.printTime();
    dinnerTime.printTime();
}