#include <stdio.h>

int is_tsn(int n) {

    int p = 0;
    int result;

    while (n) {

        result = n % 10;
        if (result % 3 == 0)
            p = 1;
        n /= 10;

    }

    if (p == 1)
        return 1;
    else
        return 0;

}

int is_three(int n){

    int sum = 0;

    while(n){
        sum += n % 10;
        n /= 10;
    }

    if(sum % 3 == 0){
        return 1;
    }
    else
        return 0;

}

int main() {

    int i;
    int a, b;
    int cnt = 0;

    scanf("%d %d", &a, &b);

    for(i = a; i <= b; i++){
        if(is_tsn(i) == 1 || is_three(i) == 1){
            cnt++;
        }
    }

    printf("%d", cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}