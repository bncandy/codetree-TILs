#include <stdio.h>
#include <string.h>

int is_dfstring(char *input, int n){

    int i, j;
    int temp = 0;

    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            if (input[i] != input[j])
                temp += 1;
        }
    }

    if (temp)
        return 1;
    else 
        return 0;

}

int main() {

    char input[101] = { 0, };
    
    scanf("%s", input);

    if (is_dfstring(input, strlen(input) - 1))
        printf("Yes");
    else
        printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}