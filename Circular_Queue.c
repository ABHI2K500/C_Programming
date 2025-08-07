#include <stdio.h>

int main() {
    int size = 100;
    int queue[100];
    int front = -1;
    int rear = -1;
    int choice;
    int run = 1;
    int value;

    while (run == 1) {
        printf("\nEnter your choice:\n1. Enqueue\n2. Dequeue\n3. Display\n> ");
        scanf("%d", &choice);

        if (choice == 1) {
            // Enqueue Operation
            printf("Enter value to enqueue: ");
            scanf("%d", &value);

            if ((rear + 1) % size == front) {
                printf("Queue is full\n");
            } else if (rear == -1) {
                front = rear = 0;
                queue[rear] = value;
            } else {
                rear = (rear + 1) % size;
                queue[rear] = value;
            }

        } else if (choice == 2) {
            // Dequeue Operation
            if (front == -1) {
                printf("Queue is empty\n");
            } else if (front == rear) {
                printf("Dequeued item is %d\n", queue[front]);
                front = rear = -1;
            } else {
                printf("Dequeued item is %d\n", queue[front]);
                front = (front + 1) % size;
            }

        } else if (choice == 3) {
            // Display
            if (front == -1) {
                printf("Queue is empty\n");
            } else {
                printf("Queue: ");
                int i = front;
                while (1) {
                    printf("%d ", queue[i]);
                    if (i == rear)
                        break;
                    i = (i + 1) % size;
                }
                printf("\n");
            }

        } else {
            printf("Enter a valid choice (1-3)\n");
        }

        printf("Would you like to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &run);
    }

    return 0;
}
