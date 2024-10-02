#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {5, 5, 3, 2, 2, 5, 9, 1};
    auto iter = std::unique(v.begin(), v.end());
    for (const auto& num : v) {
         std::cout << num << " ";
     }

    v.erase(iter, v.end()); 

 
    for (const auto& num : v) {
        std::cout << num << " ";
    }

   std::cout << std::endl; 
    return 0;
}
