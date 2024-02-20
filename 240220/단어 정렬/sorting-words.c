#include <stdio.h>
#include <string.h>

int main() {

    char input[100][101] = { 0, };
    int i,j;
    int n;
    int min_index = 0;
    

    scanf("%d", &n);

    for (i = 0 ; i < n; i++){
        scanf("%s", input[i]);
    }

    for (i = 0; i < n - 1; i++){
        char temp[101] = { 0, };
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (strcmp(input[j], input[min_index]) < 0)
                min_index = j;
        }
        strcpy(temp, input[i]);
        strcpy(input[i], input[min_index]);
        strcpy(input[min_index], temp);
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < strlen(input[i]); j++){
            printf("%c", input[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}