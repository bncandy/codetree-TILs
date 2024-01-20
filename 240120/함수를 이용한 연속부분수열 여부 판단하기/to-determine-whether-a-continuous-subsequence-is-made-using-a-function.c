#include <stdio.h>

void is_suyeol(int* a, int b, int* c, int d){

    int i, j;
    int cnt = 0;

    for (i = 0; i < b; i++){
        if (a[i] == c[0]){
            cnt = 1;
            for (j = 1; j < d; j++){
                if(c[j] == a[i + j]){
                    cnt++;
                }
            }
        }
    }

    if(cnt != d)
        printf("No");
    else printf("Yes");
}

int main() {

    int i;
    int m, n;
    int input1[100] = { 0, }, input2[100] = { 0, };

    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        scanf(" %d", &input1[i]);
    for(i = 0; i < n; i++)
        scanf(" %d", &input2[i]);
    
    is_suyeol(input1, m, input2, n);
    // 여기에 코드를 작성해주세요.
    return 0;
}