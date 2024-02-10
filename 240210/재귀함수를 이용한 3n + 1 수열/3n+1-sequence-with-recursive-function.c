#include <stdio.h>

int cnt;

void recur(int n){
    if (n == 1)
        return;
    
    if (n % 2 == 0){
        recur(n / 2);
        cnt++;
    }

    else {
        recur(3 * n + 1);
        cnt++;
    }
        
    
}

int main() {

    int n;

    scanf("%d", &n);

    recur(n);
    
    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}