#include <stdio.h>
#include <string.h>

void s_sort(char* input, int n){
    int i, j;
    int min_index = 0;
    char temp;

    for (i = 0; i < n - 1; i++){
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

    char input[101] = { 0, };
    int i, j;

    scanf("%s", input);

    s_sort(input, strlen(input));

    for (i = 0; i < strlen(input); i++)
        printf("%c", input[i]);
    // 여기에 코드를 작성해주세요.
    return 0;
}