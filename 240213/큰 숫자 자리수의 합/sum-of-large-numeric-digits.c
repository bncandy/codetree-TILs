#include <stdio.h>

int recur(int n){

    if (n < 10)
        return n;
    
    return n % 10 + recur(n / 10);
}

int main(){

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d", recur(a*b*c));

    return 0;

}