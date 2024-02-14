#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 50

typedef struct{
    char key;
}element;

element stack[MAX_STACK_SIZE];

element zero = { '\0', };

int top = -1;

void push(element item){

    if (top == MAX_STACK_SIZE - 1){
        exit(EXIT_FAILURE);
    }
    stack[++top] = item;

}

element pop(){

    if (top < 0){
        exit(EXIT_FAILURE);
    }
    return stack[top--];

}

void isRight(char* input){
    int i;
    for (i = 0; i < strlen(input); i++){
        element temp = { '\0', };
        temp.key = input[i];
        push(temp);
        if (temp.key == ')'){
            pop();
            pop();
        }
    }
    if (top < 0)
        printf("Yes");
    else printf("No");
}

int main() {

    char input[51] = { 0, };
    int i;

    scanf("%s", input);

    isRight(input);
    // 여기에 코드를 작성해주세요.
    return 0;
}