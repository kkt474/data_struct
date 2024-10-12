#include<iostream>
#include<vector>
#include<algorithm>

// find_if:  返回一个指向满足条件的第一个元素的迭代器，如果没有找到则返回结束迭代器

int main(){
    std::vector<int> numbers = {1,3,5,7,9};

    // 使用std::find_if查找第一个大于5的元素
    auto it = std::find_if(numbers.begin(),numbers.end(),[](int n){
            return n > 5;  // 条件：查找大于5的元素
    });

    if(it != numbers.end()){
        std::cout << "Found: " << *it << std::endl;
    } else{
        std::cout << "Not Found" << std::endl;
    }

    return 0;
}