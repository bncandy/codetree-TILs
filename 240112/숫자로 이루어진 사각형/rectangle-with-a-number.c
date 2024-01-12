#include <stdio.h>

void print_square(int n){

    int i, j;
    int cnt = 0;

    for(i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", (cnt) % 9 + 1);
            cnt++;
        }
        printf("\n");
    }

}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    print_square(n);

    return 0;
}