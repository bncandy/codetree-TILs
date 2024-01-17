#include <stdio.h>

long long int power(int m, int n){

    int i;
    long long int result = 1;

    for (i = 0; i < n; i++){
        result *= m;
    }

    return result;

}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%lld", power(a,b));
    // 여기에 코드를 작성해주세요.
    return 0;
}