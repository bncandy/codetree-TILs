#include <stdio.h>

int lcd(int n, int m){

    int i;
    int result = 1;

    for (i = 1; i <= n; i++){
        if( m % i == 0){
            result = i;
        }
    }

    return n * m / result;

}

int main() {

    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d", lcd(n, m));
    return 0;
}