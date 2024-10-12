#include <stdio.h>
#include <string>
#include <cstdlib>

int main() {
    std::string str = "456";
    int integer = std::atoi(str.c_str());
    printf("str to int: %d\n", integer);
    return 0;
}