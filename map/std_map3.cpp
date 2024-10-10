#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<std::string, int> map = {
        {"Tom", 1},
        {"Jack", 2},
        {"Ann", 4}
    };

    for (const auto& n : map) {
        std::cout << "key: " << n.first << " value: " << n.second << "\n";
    }

    map["Tiffany"] = 5;
    map["John"] = 3;

    std::cout << map["John"] << "\n";
    std::cout << map["Tiffany"] << "\n";

    for (const auto& n : map) {
        std::cout << "key: " << n.first << " value: " << n.second << "\n";
    }

    return 0;
}