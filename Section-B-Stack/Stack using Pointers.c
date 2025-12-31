#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
struct Node* top = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Heap Overflow! Could not allocate memory.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top; 
    top = newNode;     
    printf("Pushed %d onto the stack.\n", value);
}

void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
 }
    struct Node* temp = top;
    printf("Popped %d from the stack.\n", top->data);
    top = top->next;
    free(temp);     
}

void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is %d\n", top->data);
    }
}

void display() {
    struct Node* temp = top;
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("--- Stack using Pointers (Linked List) ---\n");
    
    push(100);
    push(200);
    push(300);
    display();
    
    peek();
    
    pop();
    display();
    
    return 0;
}
