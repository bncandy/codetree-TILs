#include <stdio.h>

int facto(int n){
    if (n == 0 || n == 1)
        return 1;
    
    return n * facto(n - 1);
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", facto(n));
    // 여기에 코드를 작성해주세요.
    return 0;
}