#include <stdio.h>

int input[100];

int main() {

    int n, m;
    int i, j;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++)
        scanf("%d", &input[i]);
    
    for (i = 0; i < m; i++){
        int a1, a2;
        int cnt = 0;

        scanf("%d %d", &a1, &a2);

        for (j = a1 - 1; j <= a2 - 1; j++)
            cnt += input[j];
        printf("%d\n", cnt);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}