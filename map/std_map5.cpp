#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<int, std::string> studentMap;
    studentMap[1] = "Tom";
    studentMap[7] = "Jack";
    studentMap[15] = "John";

    studentMap.erase(1);
    for (const auto& m : studentMap) {
        std::cout << m.first << " " << m.second << "\n";
    }

    return 0;
}

// #include <iostream>
// #include <string>
// #include <map>

// int main() {
//     std::map<int, std::string> studentMap;
//     studentMap[1] = "Tom";
//     studentMap[7] = "Jack";
//     studentMap[15] = "John";

//     auto ret = studentMap.erase(1);
//     std::cout << ret << "\n";
//     for (const auto& m : studentMap) {
//         std::cout << m.first << " " << m.second << "\n";
//     }

//     ret = studentMap.erase(2);
//     std::cout << ret << "\n";
//     for (const auto& m : studentMap) {
//         std::cout << m.first << " " << m.second << "\n";
//     }

//     return 0;
// }