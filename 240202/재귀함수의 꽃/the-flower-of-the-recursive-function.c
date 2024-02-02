#include <stdio.h>

void printnum(int n){

    if (n == 0)
        return;

    
    printf("%d ", n);
    printnum(n - 1);
    printf("%d ", n);
    
}

int main() {

    int n;

    scanf("%d", &n);

    printnum(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}