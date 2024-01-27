#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[1001];
char compare[1001];



int main() {

    char* s = NULL;
    int i;

    scanf("%s", input);
    scanf("%s", compare);

    s = strstr(input, compare);

    if (!s){
        printf("-1");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < strlen(input) - 1; i++){
        if (s == input + i){
            printf("%d", i);
            break;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}