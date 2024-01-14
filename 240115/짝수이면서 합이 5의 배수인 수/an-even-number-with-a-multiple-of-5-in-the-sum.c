#include <stdio.h>

int is_even(int n){

    if(n % 2 != 0)
        return 0;
    else 
        return 1;

}

int is_five(int n){

    int sum = 0;

    while(n){
        sum += n % 10;
        n /= 10;
    }

    if (sum % 5 != 0)
        return 0;
    else 
        return 1;

}

int main() {
    // 여기에 코드를 작성해주세요.

    int n;

    scanf("%d", &n);

    if (is_even(n) && is_five(n))
        printf("Yes");
    else
        printf("No");

    return 0;
}