#include <stdio.h>

void s_sort(int* input, int n){
    int i, j;
    int min_index = 0;
    int temp;

    for (i = 0 ; i < n - 1; i++){
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (input[j] < input[min_index])
                min_index = j;
        }
        temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }
}

int main() {

    int n, k;
    int i;
    int input[1000] = { 0, };

    scanf("%d %d", &n, &k);

    k--;

    for (i = 0; i < n; i++)
        scanf(" %d", &input[i]);
    s_sort(input, n);

    printf("%d", input[k]);
    // 여기에 코드를 작성해주세요.
    return 0;
}