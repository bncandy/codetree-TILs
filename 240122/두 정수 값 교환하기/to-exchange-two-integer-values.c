#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

int main() {

    int m, n;
    int temp;

    scanf("%d %d", &m, &n);

    SWAP(m, n, temp);

    printf("%d %d", m, n);
    // 여기에 코드를 작성해주세요.
    return 0;
}