#include <stdio.h>
#include <stdlib.h>

int min(int n, int m, int p){

    int result;
    int i;
    int a[3] = { n, m , p};

    result = a[0];

    for (i = 1 ; i < 3; i++){
        if(a[i] < result)
            result = a[i];
    }

    return result;

}

int main() {
    // 여기에 코드를 작성해주세요.

    int m, n, p;

    scanf("%d %d %d", &m, &n, &p);

    printf("%d", min(m, n, p));
    return 0;
}