#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

void printForward(struct Node* head) {
    struct Node* temp = head;
    printf("Forward:  ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 100;
    head->prev = NULL;
    head->next = second;

    second->data = 200;
    second->prev = head;
    second->next = third;

    third->data = 300;
    third->prev = second;
    third->next = NULL;

    printForward(head);

    free(head);
    free(second);
    free(third);

    return 0;
} 
