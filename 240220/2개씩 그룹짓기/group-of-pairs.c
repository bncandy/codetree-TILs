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
    int i;
    int result = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &buff[i]);
    
    s_sort(buff, n);

    result = buff[0] + buff[n - 1];
    printf("%d", result);
    // 여기에 코드를 작성해주세요.
    return 0;
}