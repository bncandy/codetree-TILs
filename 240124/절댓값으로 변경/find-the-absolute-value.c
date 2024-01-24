#include <stdio.h>

void change(int* input, int n){

    int i;

    for (i = 0; i < n; i++){
        if (input[i] < 0)
            input[i] *= -1;
    }

}

int main() {

    int n;
    int input[50] = { 0, };
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf(" %d", &input[i]);
    
    change(input, n);

    for (i = 0; i < n; i++)
        printf("%d ", input[i]);
    // 여기에 코드를 작성해주세요.
    return 0;
}