#include <stdio.h>

int smallsu(int a, int b){

    if (a > b)
        return b * 2;
    else return a * 2;

}

int keunsu(int a, int b){

    if (a > b)
        return a + 25;
    else return b + 25;

}

int main() {
    // 여기에 코드를 작성해주세요.

    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d %d", keunsu(a, b), smallsu(a, b));
    else 
        printf("%d %d", smallsu(a, b), keunsu(a, b));
    return 0;
}