#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {

    char buff[100001] = { 0, };
    char cmp[100001] = { 0, };

    scanf("%s", buff);
    scanf("%s", cmp);

    qsort(buff, strlen(buff), sizeof(char), compare);
    qsort(cmp, strlen(cmp), sizeof(char), compare);

    if(!strcmp(buff, cmp) && strlen(buff) == strlen(cmp))
        printf("Yes");
    else printf("No");
    // 여기에 코드를 작성해주세요.
    return 0;
}