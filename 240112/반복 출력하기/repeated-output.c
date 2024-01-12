#include <stdio.h>

void printstring(int n){
    int i;

    for(i = 0; i < n; i++){
        printf("12345^&*()_\n");
    }
}

int main() {

    int n;

    scanf("%d", &n);

    printstring(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}