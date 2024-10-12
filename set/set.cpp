// set: 有序不重复的关联式容器 底层实现：红黑树
// set里面元素的值是不可修改，但set容器可以插入或删除元素

#include <iostream>
#include <set>

int main() {
    std::set<int> myset = {3, 1};
    myset.insert(2);
    myset.insert(5);
    myset.insert(4);
    myset.insert(5);
    myset.insert(4);

    // for (const auto &s : myset) {
    //     std::cout << s << " ";
    // }
    // std::cout << "\n";

for (std::set<int>::iterator it = myset.begin(); it != myset.end(); it++) {
// or
// for (auto it = myset.begin(); it != myset.end(); it++) {
    std::cout << *it << " ";
}
std::cout << "\n";

    return 0;
}