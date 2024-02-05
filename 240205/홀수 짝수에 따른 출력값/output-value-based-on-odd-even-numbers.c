#include <stdio.h>

int recur(int n){

    int result = 0;

    if (n < 1)
        return 0;
    
    return n + recur(n - 2);

}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", recur(n));
    // 여기에 코드를 작성해주세요.
    return 0;
}