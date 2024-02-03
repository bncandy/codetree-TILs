#include <stdio.h>

int recur(int n){

    if (n == 1)
        return 1;
    else return n + recur(n - 1);

}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", recur(n));
    // 여기에 코드를 작성해주세요.
    return 0;
}