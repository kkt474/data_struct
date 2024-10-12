//  unordered_map: 无序不重复关联式容器    底层实现：哈希表
// 查找的时间复杂度： O(1)

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap;
    umap.insert(std::pair<std::string, int>("John", 3));

    std::pair<std::unordered_map<std::string, int>::iterator, bool> retPair;
    retPair = umap.insert(std::pair<std::string, int>("John", 3));  
    
    if (retPair.second == true)
        std::cout << "Insert Successfully\n";
    else
        std::cout << "Insert Failure\n";

    return 0;
}