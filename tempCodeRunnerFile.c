#include<stdio.h>
#define max 50

int queue[max];
int front = -1, rear = -1;

void enqueue() {
    int n;
    if(rear == max - 1) {
        printf("Queue is Full\n");
    } else {
        printf("Enter element to be entered in the queue: ");
        scanf("%d", &n);

        if(front == -1) {
            front = 0;
        }
        rear++;
        queue[rear] = n;
        printf("%d added to the queue\n", n);
    }
}

void dequeue() {
    if(front == -1) {
        printf("Queue is Empty\n");
    } else {
        printf("Element dequeued: %d\n", queue[front]);
        front++;
    }
}

int main() {
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    dequeue(); 
    return 0;
}
