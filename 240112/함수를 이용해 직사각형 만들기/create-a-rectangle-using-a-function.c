#include <stdio.h>

void square(int n, int m){
    int i, j;

    for( i = 0; i < n; i++){
        for( j = 0; j < m; j++){
            printf("1");
        }
        printf("\n");
    }
}

int main() {

    int n, m;

    scanf("%d %d", &n, &m);

    square(n, m);
    // 여기에 코드를 작성해주세요.
    return 0;
}