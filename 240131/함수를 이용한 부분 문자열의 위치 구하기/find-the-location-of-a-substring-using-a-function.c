#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[1001];
char compare[1001];


int nfind(char* input, char* compare){
    int i, j, start = 0;
    int last_i = strlen(input) - 1;
    int last_c = strlen(compare) - 1;
    int endmatch = last_c;

    for (i = 0; endmatch <= last_i; endmatch++, start++){
        if (input[endmatch] == compare[last_c])
            for (j = 0, i = start; j < last_c && input[i] == compare[j]; i++, j++);
        if (j == last_c)
            return start;
    }
    return -1;
}


int main() {

    scanf("%s", input);
    scanf("%s", compare);

    printf("%d", nfind(input, compare));

    // 여기에 코드를 작성해주세요.
    return 0;
}