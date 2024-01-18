#include <stdio.h>

void cal(int a, char b, int c){

    if(b == '+'){
        printf("%d %c %d = %d", a, b, c, a + c);
        return;
    }
        
    else if (b == '-'){
        printf("%d %c %d = %d", a, b, c, a - c);
        return;
    }
        
    else if (b == '*'){
        printf("%d %c %d = %d",a , b , c, a * c);
        return;
    }
        
    else if (b == '/'){
        printf("%d %c %d = %d",a, b, c,  a / c);
        return;
    }
        
    else {
        printf("False");
        return;
    }

}

int main() {

    int a, c;
    char b;

    scanf("%d %c %d", &a, &b, &c);

    cal(a, b, c);
    // 여기에 코드를 작성해주세요.
    return 0;
}