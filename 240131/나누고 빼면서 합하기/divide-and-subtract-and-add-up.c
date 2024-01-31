#include <stdio.h>

int input[101];

int summa(int* input, int m){

    int result = 0;

    while(m >= 1){
        if(m % 2 != 0){
            result += input[m];
            m--;
        }
        else{
            result += input[m];
            m /= 2;
        }
    }

    return result;
}

int main() {

    int m, n;
    int i;

    scanf("%d %d", &m, &n);

    for (i = 1; i <= m; i++)
        scanf(" %d", &input[i]);
    
    printf("%d", summa(input, n));
    // 여기에 코드를 작성해주세요.
    return 0;
}