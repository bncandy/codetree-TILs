#include <stdio.h>
#include <string.h>

void s_sort(char* input){
    int i, j, n = strlen(input);
    int min_index = 0;
    char temp;

    for (i = 0; i < n - 1; i++){
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (input[j] < input[min_index]){
                min_index = j;
            }
        }
        temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }   
}

int main() {

    char buff[100001] = { 0, };
    char cmp[100001] = { 0, };

    scanf("%s", buff);
    scanf("%s", cmp);

    s_sort(buff);
    s_sort(cmp);

    if(!strcmp(buff, cmp))
        printf("Yes");
    else printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}