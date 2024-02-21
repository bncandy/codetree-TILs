#include <stdio.h>

int main() {

    int n;
    int temp = 0;
    int k;

    scanf("%d", &n);
    if (n % 2 != 0)
        temp = 1;
    k = n / 2;

    if(temp)
        printf("%d", 2 * k);
    else printf("%d", 2 * (k - 1));


    // 여기에 코드를 작성해주세요.
    return 0;
}