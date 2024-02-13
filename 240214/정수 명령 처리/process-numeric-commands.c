#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 10000

typedef struct{
    int key;
}element;

element stack[MAX_STACK_SIZE];

int top = -1;

int size(int top){
    if (top < 0)
        return 0;
    else return top + 1; 
}

element printop(int top){
    return stack[top];
}

int isEmpty(int top){
    if (top < 0)
        return 1;
    else return 0;
}

void push(element item){
    if (top >= MAX_STACK_SIZE - 1)
        exit(EXIT_FAILURE);
    stack[++top] = item;
}

element pop(){
    if (top == -1)
        exit(EXIT_FAILURE);
    return stack[top--];
}



int main() {

    int n, i;
    element temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        char input[7] = { 0, };
        scanf("%s", input);
        if (strcmp(input, "push") == 0){
            scanf("%d", &temp.key);
            push(temp);
        }
        else if (strcmp(input, "pop") == 0){
            printf("%d\n", pop().key);
        }
        else if (strcmp(input, "size") == 0){
            printf("%d\n", size(top));
        }
        else if (strcmp(input, "empty") == 0){
            printf("%d\n", isEmpty(top));
        }
        else if (strcmp(input, "top") == 0){
            printf("%d\n", printop(top).key);
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}