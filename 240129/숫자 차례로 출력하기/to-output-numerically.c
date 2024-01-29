#include <stdio.h>

void prints(int n){

    if (n == 0){
        return;
    }

    
    prints(n - 1);
    printf("%d ", n);

}

void printr(int n){

    if (n == 0)
        return;
    
    printf("%d ", n);
    printr(n - 1);
}

int main() {
    int n;

    scanf("%d", &n);

    prints(n);
    printf("\n");
    printr(n);
    // 여기에 코드를 작성해주세요.
    return 0;
}