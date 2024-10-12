#include <iostream>
#include <string>  // std::stoi()

int main() {
    std::string str = "789";
    int integer = std::stoi(str);
    printf("str to int: %d\n", integer);
    return 0;
}