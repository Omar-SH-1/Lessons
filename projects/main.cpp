#include <iostream>
#include "time.h"

bool IsAfternoonTime(const chron::Time& time) {
    return time.GetHours() >= 12;
}


int main() {
    chron::Time t(100, 130, -90);
    if (IsAfternoonTime(t)) {  
        std::cout << t.GetHours() - 12 << "PM\n";
    }
}
