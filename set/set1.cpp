#include<iostream>
#include<set>

int main(){
    std::set<int> myset{2, 4, 6, 8};

    myset.erase(2);
    for (const auto &s : myset) {
        std::cout << s << " ";
    }
    std::cout << "\n";

    return 0;
}