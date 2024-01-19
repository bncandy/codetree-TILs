#include <stdio.h>

int on(int a, int b){

    int i;
    int cnt = 0;

    for (i = a; i <= b; i++){
        int temp = i % 10;
        int temp2 = i % 3;
        int temp3 = i % 9;
        if (i % 2  == 0 || temp == 5 ||( temp2 == 0 && temp3 != 0))
            cnt++;
    }

    return cnt;

}

int main() {

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", b - a + 1 - on(a, b));
    // 여기에 코드를 작성해주세요.
    return 0;
}