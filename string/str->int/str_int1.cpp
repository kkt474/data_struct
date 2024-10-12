#include <stdio.h>
#include <cstdlib>

int main() {
    char buffer[128] = "456";
    int integer = std::atoi(buffer);
    printf("str to int: %d\n", integer);
    return 0;
}