#include <stdio.h>

void s_sort(int* input, int n){

    int i, j;
    int min_index = 0;
    int temp = 0;

    for (i = 0; i < n - 1; i++){
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (input[j] < input[min_index])
                min_index = j;
        }
        temp = input[min_index];
        input[min_index] = input[i];
        input[i] = temp;
    }

}

int main() {

    int input[100] = { 0, };
    int i;
    int n;

    scanf("%d", &n);
    for (i = 0; i < n; i++){
        scanf(" %d", &input[i]);
    }

    s_sort(input, n);

    for (i = 0; i < n; i++){
        printf("%d ", input[i]);
    }

    printf("\n");

    for (i = n - 1; i >= 0; i--){
        printf("%d ", input[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}