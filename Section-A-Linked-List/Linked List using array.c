#include <stdio.h>
#define MAX 5 

struct Node {
    int data;
    int next;
};

struct Node list[MAX];
int head = -1; 
int free_head = 0
void initialize() {
    for (int i = 0; i < MAX - 1; i++) {
        list[i].next = i + 1;
    }
    list[MAX - 1].next = -1; 
}
void insert(int value) {
    if (free_head == -1) {
        printf("Error: List is full!\n");
        return;
    }
    int newNodeIndex = free_head;
    free_head = list[free_head].next;

    list[newNodeIndex].data = value;
    list[newNodeIndex].next = head;
    
    head = newNodeIndex;
    printf("Inserted: %d\n", value);
}

void display() {
    int temp = head;
    printf("List Content: ");
    while (temp != -1) {
        printf("%d -> ", list[temp].data);
        temp = list[temp].next;
    }
    printf("NULL\n");
}

int main() {
    initialize();
    insert(10);
    insert(20);
    insert(30);
    display();
   return 0;
}

