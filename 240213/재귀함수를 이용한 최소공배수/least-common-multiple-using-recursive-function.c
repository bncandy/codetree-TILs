#include <stdio.h>

int gcd(int a, int b){

    if (a == 0)
        return b;
    return gcd(b % a, a);

}

int lcd(int a, int b){

    return (a * b) / gcd(a, b);

}

int main() {

    int result = 1;
    int i;
    int n;
    int input[10] = { 0, };

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        int temp;
        scanf(" %d", &temp);
        if(!i)
            result = temp;
        result = lcd(result , temp);
    }
    
    printf("%d", result);
    // 여기에 코드를 작성해주세요.
    return 0;
}