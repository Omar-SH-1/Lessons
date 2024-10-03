#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, world! How do you do?";
    auto sub = s.substr(7); 
    sub[0] = 'W';
    std::cout << sub << "\n";  
    std::cout << s << "\n"; 
}
