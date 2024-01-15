#include <stdio.h>

int is_yoon(int n){

    int temp1 = 0;
    int temp2 = 0;
    int temp3 = 0;
    
    if (n % 4 == 0)
        temp1 = 1;
    
    if (n % 100 == 0)
        temp2 = 1;

    if (n % 400 == 0)
        temp3 = 1;

    if(temp1 && (!temp2 || temp3))
        return 1;
    
    else return 0;

}

int main() {

    int n;

    if(is_yoon)
        printf("true");
    else   
        printf("false");
    // 여기에 코드를 작성해주세요.
    return 0;
}