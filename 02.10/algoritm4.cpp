#include <algorithm>
#include <list>
#include <vector>
#include <iostream>

int main() {
    std::vector<int> data = {3, 14, 15, 92, 6};
    std::partial_sort(data.begin(),data.begin()+3,data.end());
      for (const auto& num : data) {
         std::cout << num << " ";
     }
}
