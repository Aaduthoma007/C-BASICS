#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

// Display linked list
void disp() {
    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Insert at beginning
void insert(int value) {
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = value;
    newnode->next = head;  // link new node to old first node
    head = newnode;        // head now points to new node
}

int main() {
    printf("LINKED LIST\n");

    insert(20);
    insert(30);
    insert(40);

    disp();  // print the list

    return 0;
}

