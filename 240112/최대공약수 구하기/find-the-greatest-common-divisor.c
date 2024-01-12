#include <stdio.h>

void GCD(int n, int m){

    int i, j;
    int gc;

    for (i = 1; i <= n; i++){
        if(m % i == 0 && n % i == 0){
            gc = i;
        }
    }

    printf("%d", gc);

}

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    GCD(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}