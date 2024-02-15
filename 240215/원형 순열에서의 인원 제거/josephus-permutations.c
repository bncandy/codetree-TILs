#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_QUEUE_SIZE 5001

typedef struct {
    int key;
}element;

element queue[MAX_QUEUE_SIZE];

element zero = { 0, };

int front = -1;
int rear = -1;

void queueFull(){
    exit(EXIT_FAILURE);
}

void addq(element item){
    rear = (rear + 1) % MAX_QUEUE_SIZE;
    if ((front >= 0 && (rear + 1) % MAX_QUEUE_SIZE == front) || (front == -1 && rear == MAX_QUEUE_SIZE - 1))
        queueFull();
    queue[rear] = item;
}

element deleteq(){
    
    if (front == rear)
        return zero;
    front = (front + 1) % MAX_QUEUE_SIZE;
    return queue[front];

}


int main() {

    int cnt = 0;
    int n, k;
    int i, j;
    element temp = { 0, };

    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++){
        element temp = { 0, };
        temp.key = i;
        addq(temp);
    }

    // 여기까지 입력

    while(cnt < n){
        for (j = 0; j < k - 1; j++){
        element temp;
        temp = deleteq();
        addq(temp);
        }

    printf("%d ", deleteq().key);
    cnt++;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}