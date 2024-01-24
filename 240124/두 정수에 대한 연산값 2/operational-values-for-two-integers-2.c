#include <stdio.h>

void function (int* a, int* b){

    if (*a > *b){
        *a *= 2;
        *b += 10;
    }

    else {
        *a += 10;
        *b *= 2;
    }

}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    function(&a, &b);

    printf("%d %d", a, b);
    // 여기에 코드를 작성해주세요.
    return 0;
}