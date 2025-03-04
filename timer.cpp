#include <iostream>
void ringAlarm(){
    std::cout << "ALARM!" << std::endl;
};

void timer(int num) {
    int totalSecond = num * 60; 
    for (int secondLeft = totalSecond; secondLeft >= 0; secondLeft--){
        int minutes = secondLeft / 60;
        int seconds = secondLeft % 60;
        std::cout << minutes << ":" << seconds << std::endl;
    }
    ringAlarm();
}

int main(){
    timer(3);
    return 0;
}