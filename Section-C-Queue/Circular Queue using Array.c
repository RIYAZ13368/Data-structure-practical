#include <stdio.h>
#define MAX 5

int cq[MAX];
int front = -1, rear = -1;

void enqueue(int item)
{
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
    {
        printf("Queue Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (rear == MAX - 1)
        rear = 0;
    else
        rear++;

    cq[rear] = item;
    printf("%d inserted\n", item);
}
void dequeue()
{
    if (front == -1)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d deleted\n", cq[front]);
    if (front == rear)
        front = rear = -1;
    else if (front == MAX - 1)
        front = 0;
    else
        front++;
}

void display()
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    if (front <= rear)
    {
        for (i = front; i <= rear; i++)
            printf("%d ", cq[i]);
    }
    else
    {
        for (i = front; i < MAX; i++)
            printf("%d ", cq[i]);
        for (i = 0; i <= rear; i++)
            printf("%d ", cq[i]);
    }
    printf("\n");
}
int main()
{
    enqueue(5);
    enqueue(10);
    enqueue(15);
    enqueue(20);
    display();

    dequeue();
    dequeue();
    display();

    enqueue(25);
    enqueue(30);
    display();

    return 0;
}
