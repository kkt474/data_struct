#include <stdio.h>
#include <ctype.h>
// 自制字符串转数字
int myatoi(const char *s) {
    int sum = 0;
    int i = 0;
    int sign = 1;

    if (s[i] == '-') {
        sign = -1;
        i++;
    }

    while (isdigit(s[i])) {
        sum = sum * 10 + s[i] - '0';
        i++;
    }
    return sum * sign;
}

int main() {
    char buffer[] = "12345";
    int integer = myatoi(buffer);
    printf("str to int: %d\n", integer);

    char buffer2[] = "-12345";
    int integer2 = myatoi(buffer2);
    printf("str to int: %d\n", integer2);
    return 0;
}