#include <stdio.h>

int main() {

    int a, b, c, d;
    int result = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (d < b){
        c--;
        d += 60;
    }
    result += d - b;
    c = c - a;
    result += c * 60;
    printf("%d", result);
    // 여기에 코드를 작성해주세요.
    return 0;
}