#include <stdio.h>

int recur(int n){

    if (n == 1 || n == 2){
        return 2 * n;
    }

    return (recur(n - 1) * recur(n - 2)) % 100;

}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", recur(n));
    // 여기에 코드를 작성해주세요.
    return 0;
}