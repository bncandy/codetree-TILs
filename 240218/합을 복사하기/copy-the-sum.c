#include <stdio.h>

int main() {

    int a, b, c;
    int result = 0;
    a = 1, b = 2, c = 3;
    result = a + b + c;
    a = b = c = result;

    printf("%d %d %d", a, b, c);
    // 여기에 코드를 작성해주세요.
    return 0;
}