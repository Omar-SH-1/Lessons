#include <vector>
#include <iostream>

template<typename T>
void Duplicate(std::vector<T>& v) {
   
    size_t Size = v.size();
    

    for (size_t i = 0; i < Size; ++i) {
        v.push_back(v[i]);
    }
}

int main() {
    std::vector<int> vec = {1, 2, 3, 4};

    Duplicate(vec);


    for (const auto& elem : vec) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
