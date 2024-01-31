#include <stdio.h>

int n;

void print_star(int cnt){

    int i;

    if (cnt == 0){
        return;
    }
    
    for (i = 0; i < cnt; i++)
        printf("* ");
    printf("\n");
    print_star(cnt - 1);

}

void printstar(int cnt){

    int i;

    if (cnt == n + 1){
        return;
    }

    for (i = 0; i < cnt; i++)
        printf("* ");
    printf("\n");
    printstar(cnt + 1);
        
}

int main() {

    scanf("%d", &n);

    print_star(n);
    printstar(1);
    // 여기에 코드를 작성해주세요.
    return 0;

}