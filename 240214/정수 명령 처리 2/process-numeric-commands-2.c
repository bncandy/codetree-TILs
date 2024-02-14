#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 10000

typedef struct {
    int key;
}element;

element queue[MAX_QUEUE_SIZE];

element zero = { -1, };

int rear = -1;
int front = -1;

int isEmptyQ(){
    if (front == rear)
        return 1;
    else return 0;
}

void addq(element item){
    if (rear == MAX_QUEUE_SIZE - 1)
        exit(EXIT_FAILURE);
    queue[++rear] = item;
}

element deleteq(){
    if(isEmptyQ())
        return zero;
    return queue[++front];
}

int size(){
    return rear - front;
}

element printfront(){
    
    return queue[front + 1];

}

int main() {

    int n, i;
    element temp;

    scanf("%d", &n);

    for (i = 0; i < n; i++){
        char input[7] = { 0, };
        scanf("%s", input);
        if (!strcmp(input, "push")){
            scanf("%d", &temp.key);
            addq(temp);
        }
        else if (!strcmp(input, "pop")){
            printf("%d\n", deleteq().key);
        }
        else if (!strcmp(input, "size")){
            printf("%d\n", size());
        }
        else if (!strcmp(input, "empty")){
            printf("%d\n", isEmptyQ());
        }
        else if (!strcmp(input, "front")){
            printf("%d\n", printfront().key);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}