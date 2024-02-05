#include <stdio.h>

int n;

void recur(int input){

    int temp = 0;

    if (input == 1)
        return;
    
    if (input % 2 == 0){
        temp = input / 2;
        n++;
    }
        
    else {
            temp = input / 3;
            n++;

    }
    
    recur(temp);
    

}

int main() {

    int input;

    scanf("%d", &input);

    recur(input);

    printf("%d", n);


    // 여기에 코드를 작성해주세요.
    return 0;
}