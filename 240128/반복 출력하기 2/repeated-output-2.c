#include <stdio.h>

void print_recursive(int n){

    if (!n)
        return;
    else {
        printf("HelloWorld\n");
        print_recursive(n - 1);
    }

}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    scanf("%d", &n);
    print_recursive(n);
    return 0;
}