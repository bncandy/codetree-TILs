#include <stdio.h>

int main() {

    int a, b;
    int temp;

    a = 3;
    b = 4;
    temp = b;
    b = a;

    printf("%d %d\n", a, b);

    printf("%d", a * b);
    // 여기에 코드를 작성해주세요.
    return 0;
}