#include <stdio.h>

int setup[100];
int result;

void recur(int* input, int n){

    if (n == 0)
        return;

    result = result > input[n - 1] ? result : input[n - 1];

    recur(input, n - 1);

}

int main() {

    int n, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &setup[i]);
    result = setup[i - 1];
    recur(setup, n);
    printf("%d", result);
    // 여기에 코드를 작성해주세요.
    return 0;
}