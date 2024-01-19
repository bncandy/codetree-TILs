#include <stdio.h>

int is_prime(int n){

    int i;
    int result = 0;

    for(i = 2; i < n; i++){
        if (n % i == 0)
            result = 1;
    }

    if (!result)
        return 1;
    else
        return 0;

}

int is_sumeven(int n){

    int result = 0;

    while(n){
        result += n % 10;
        n /= 10;
    }

    if(result % 2 == 0)
        return 1;
    else 
        return 0;

}

int cal(int a, int b){

    int i;
    int cnt = 0;

    for (i = a; i<= b; i++){
        if (is_prime(i) && is_sumeven(i))
            cnt++;
    }

    return cnt;
}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", cal(a, b));
    // 여기에 코드를 작성해주세요.
    return 0;
}