// map: 有序不重复关联式容器   底层实现：红黑树
// 时间复杂度: O(logn)  查找、插入、删除

// max_size(): 返回可以容纳最大元素的个数
// count(): 返回指定元素出现的次数
// find():  查找一个元素

// 初始化
// map.first:  key值，不会重复
// map.second: value

#include<iostream>
#include<string>
#include<map>
// // 插入方式1
// std::map<int, std::string> studentMap;
// studentMap.insert(std::pair<int, std::string>(1, "Tom"));
// studentMap.insert(std::pair<int, std::string>(7, "Jack"));
// studentMap.insert(std::pair<int, std::string>(15, "John"));
// // 插入方式2
// std::map<int, std::string> studentMap;
// studentMap[1] = "Tom";
// studentMap[7] = "Jack";
// studentMap[15] = "John";

// std::map<int, std::string> studentMap = {
//     {1, "Tom"},
//     {2, "Jack"},
//     {3, "John"}
// };

int main(){
    std::map<int, std::string> studentMap;
    studentMap.insert(std::pair<int, std::string>(1,"Tom"));

    std::pair<std::map<int, std::string>::iterator,bool> retPair;
    retPair = studentMap.insert(std::pair<int, std::string>(1, "Tom"));  
    
    if (retPair.second == true)
        std::cout << "Insert Successfully\n";
    else
        std::cout << "Insert Failure\n";

    std::cout << "name: " << studentMap[1] << "\n";

    return 0;
}
