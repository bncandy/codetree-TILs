#include <stdio.h>

void s_sort(int* input, int n){
    int i, j;
    int min_index = 0;

    for (i = 0; i < n - 1; i++){
        int temp;
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

    int n, i;
    int buff[100] = { 0, };
    int cmp[100] = { 0, };
    int cnt = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf(" %d", &buff[i]);
    for (i = 0; i < n; i++)
        scanf(" %d", &cmp[i]);
    
    s_sort(buff, n);
    s_sort(cmp, n);

    for (i = 0; i < n; i++){
        if (buff[i] == cmp[i])
            cnt++;
    }

    if (cnt == n)
        printf("Yes");
    else printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}