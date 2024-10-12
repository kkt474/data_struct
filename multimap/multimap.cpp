// 有序重复
#include <iostream>
#include <map>

int main() {
    std::multimap<int, int> mmap;
    mmap.insert(std::pair<int, int>(1, 10));  // mmap.insert(std::make_pair(1,10));
    mmap.insert(std::pair<int, int>(2, 20));  
    mmap.insert(std::pair<int, int>(3, 30));

    for (const auto& m : mmap) {
        std::cout << m.first << ", " << m.second << "\n";
    }
    return 0;
}