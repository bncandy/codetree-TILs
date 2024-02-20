#include <stdio.h>
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))

void s_sort(int * input, int n){
    int i, j;
    int min_index = 0;
    int temp;

    for (i = 0; i < n - 1; i++){
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (input[j] < input[min_index])
                min_index = j;
        }
        SWAP(input[i], input[min_index], temp);
    }
}

int main() {

    int n;
    int buff[2000] = { 0,};
    int cmp[2000] = { 0, };
    int result[2000] = { 0, };
    int i;

    scanf("%d", &n);

    for (i = 0; i < 2 * n; i++)
        scanf("%d", &buff[i]);
    
    s_sort(buff, 2 * n);

    for (i = 0; i < 2 * n; i++)
        cmp[2 * n - i - 1] = buff[i];

    for (i = 0; i < 2 * n; i++)
        result[i] = buff[i] + cmp[i];
    
    s_sort(result, 2 * n);


    printf("%d", result[2 * n - 1]);
    // 여기에 코드를 작성해주세요.
    return 0;
}