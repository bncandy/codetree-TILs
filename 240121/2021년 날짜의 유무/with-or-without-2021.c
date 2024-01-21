#include <stdio.h>

void is_incal(int m, int n){

    int temp1 = 0, temp2 = 0, temp3 = 0;
    int temp4 = 0, temp5 = 0, temp6 = 0;

    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        temp1 = 1;
    else if (m == 2)
        temp3 = 1;
    else if (m < 12)
        temp2 = 1;
    
    if(n < 29)
        temp4 = 1;
    else if (n >29 && n < 31)
        temp5 = 1;
    else if (n == 31)
        temp6 = 1;

    if (temp3 && temp4)
        printf("Yes");
    else if (temp1 && (temp4 || temp5 || temp6))
        printf("Yes");
    else if (temp2 && (temp4 || temp5))
        printf("Yes");
    else printf("No");
    

}

int main() {

    int m, d;

    scanf("%d %d", &m, &d);

    is_incal(m, d);
    // 여기에 코드를 작성해주세요.
    return 0;
}