#include <stdio.h>

int n;

void printstar(int cnt){

    int i;

    if (cnt == n + 1){
        return;
    }

    for (i = 0; i < cnt; i++)
        printf("*");
    printf("\n");
    printstar(cnt + 1);
        
}

int main() {

    scanf("%d", &n);

    printstar(1);
    // 여기에 코드를 작성해주세요.
    return 0;
}