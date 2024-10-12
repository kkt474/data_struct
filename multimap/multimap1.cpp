#include <iostream>
#include <map>

int main() {
    std::multimap<int, int> mmap = {
        std::make_pair(1, 10),
        std::make_pair(3, 30),
        std::make_pair(2, 23),
        std::make_pair(4, 40),
        std::make_pair(2, 20)
    };

    for (const auto& m : mmap) {
        std::cout << m.first << ", " << m.second << "\n";
    }

    // 使用前向迭代器
for (std::multimap<int, int>::iterator it = mmap.begin(); it != mmap.end(); it++) {
// or
// for (auto it = mmap.begin(); it != mmap.end(); it++) {
    std::cout << (*it).first << ", " << (*it).second << "\n";
}
    return 0;
}