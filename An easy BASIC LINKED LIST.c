#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

int main() {
    node *head = NULL;
    node *current = NULL;

    
    head = (node*)malloc(sizeof(node));
    head->data = 10;       // give some value
    head->next = NULL;

    
    current = (node*)malloc(sizeof(node));
    current->data = 20;    // give some value
    current->next = NULL;

    
    head->next = current;

    printf("Head data: %d\n", head->data);
    printf("Second node data: %d\n", head->next->data);

    return 0;
}

