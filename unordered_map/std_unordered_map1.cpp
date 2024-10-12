// 遍历
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap = {
        {"Tom", 1},
        {"Ann", 4},
        {"Jack", 2}
    };

    for (const auto& n : umap) {
        std::cout << "name: " << n.first << ", id: " << n.second << "\n";
    }

    umap["Tiffany"] = 5;
    umap["John"] = 3;

    std::cout << umap["John"] << "\n";
    std::cout << umap["Tiffany"] << "\n";

    for (std::unordered_map<std::string, int>::iterator it = umap.begin(); it != umap.end(); it++) {
    // or
    // for (auto it = umap.begin(); it != umap.end(); it++) {
        std::cout << "name: " << (*it).first << ", id: " << (*it).second << "\n";
    }
}