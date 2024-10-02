#include <algorithm>
#include <deque>
#include <iostream>

int main() {
    std::deque<int> d = {3, 14, 15, 92, 6};
    auto iter1 = std::find(d.begin(), d.end(), 15);
    std::cout << (iter1 - d.begin()) << "\n";

    auto start = d.begin();
    auto end = start + 3;
   
    auto iter2 = std::find(start, end, 19);
    if (iter2 == end) {
        std::cout << "No such element!\n";
    } else {
        std::cout << *iter2 << "\n";
    }
}
