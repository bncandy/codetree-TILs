#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[101];
char compare[101];
char dictionary[100][101];

void s_sort(char input[100][101], int n){
    int i, j;
    int min_index = 0;
    char temp[101] = { 0, };
    for (i = 0; i < n - 1; i++){
        min_index = i;
        for (j = i + 1; j < n; j++){
            if (strcmp(input[j], input[min_index]) < 0)
                min_index = j;
        }
        strcpy(temp, input[i]);
        strcpy(input[i], input[min_index]);
        strcpy(input[min_index], temp);
    }
}

int main(){

    int n, k, i, j;
    int cnt = 0;

    scanf("%d %d %s", &n, &k, compare);

    for (i = 0; i < n; i++){
        int temp = 0;
        scanf("%s", input);
        for (j = 0; j < strlen(compare);j++){
            if (input[j] == compare[j])
                temp++;
        }
        if (temp == strlen(compare)){
                strcpy(dictionary[cnt], input);
                cnt++;
        }
            
    }

    s_sort(dictionary, cnt);

    printf("%s", dictionary[k - 1]);

    return 0;

}