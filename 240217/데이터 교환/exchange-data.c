#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))


int main() {

    int a, b, c;
    int temp, temp2;
    a = 5, b = 6, c = 7;

    temp2 = c;
    SWAP(b, a, temp);
    c = temp;
    a = temp2;

    

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    // 여기에 코드를 작성해주세요.
    return 0;
}