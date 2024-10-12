#include<iostream>
#include<vector>
#include<algorithm>

// 检查向量中是否有任意元素大于10
int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 15};

    // 使用 std::any_of 检查是否有元素大于 10
    bool has_greater_than_10 = std::any_of(numbers.begin(), numbers.end(), [](int n) {
        return n > 10; // 条件：查找大于 10 的元素
    });

    if (has_greater_than_10) {
        std::cout << "There is at least one element greater than 10." << std::endl;
    } else {
        std::cout << "No elements greater than 10." << std::endl;
    }

    return 0;
} 