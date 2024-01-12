#include <stdio.h>

void printstar(int n){
    int i;

    for( i = 0; i < n; i++){
        printf("*");
    }
}

int main() {

    int i;
    int n = 10;
    int iterate = 5;

    for (i = 0; i < iterate; i++){
        printstar(n);
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}