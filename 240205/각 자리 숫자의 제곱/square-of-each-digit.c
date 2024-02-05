#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int recur(int n){
    int result = 0;

    if (n == 0)
        return 0;
    
    result += pow(n % 10, 2);
    return result + recur(n / 10);
}

int main() {

    int n;

    scanf("%d", &n);

    printf("%d", recur(n));
    // 여기에 코드를 작성해주세요.
    return 0;
}