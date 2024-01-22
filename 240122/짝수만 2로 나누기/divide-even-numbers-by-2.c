#include <stdio.h>

void setup(int* input, int n){

    int i;

    for (i = 0; i < n; i++){
        if(input[i] % 2 == 0)
            input[i] /= 2;
    }

}

int main() {

    int n;
    int input[50] = { 0,};
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf(" %d", &input[i]);
    
    setup(input, n);

    for (i = 0; i < n; i++)
        printf("%d ", input[i]);
    // 여기에 코드를 작성해주세요.
    return 0;
}