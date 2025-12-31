#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void display(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    
    printf("Nodes: ");
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Back to Start)\n");
}

int main() {
    struct Node *head, *second, *third;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    head->prev = third;  

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = head;  
    third->prev = second;

    printf("Circular Doubly Linked List:\n");
    display(head);

    printf("Head's previous node data: %d\n", head->prev->data);

    free(head);
    free(second);
    free(third);

    return 0;
}
