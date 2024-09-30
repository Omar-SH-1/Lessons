#include <iostream>
#include <map>

int main() {
    std::multimap<std::string, int> positions;
    std::string word;
    int position = 0;
    while (std::cin >> word) {
        positions.insert({word, position});
        ++position;
    }
    for (const auto& [word, freq]: positions){
		std::cout << word<< " " << freq <<"\n";
	}
}   
