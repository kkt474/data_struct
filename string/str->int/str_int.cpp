#include <stdio.h>
#include <stdlib.h>  // atoi()

int main(){
    char buffer[128]="123";
    int integer = atoi(buffer);
    printf("str to int: %d\n", integer);
    return 0;
}