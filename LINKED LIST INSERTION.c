#include<stdio.h>
#include<malloc.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node* head=NULL;

void insert(int a){
    if (head==NULL) {
        head = (node *)malloc(sizeof(node));
        head->data=a; 
        head->next=NULL;   
    }   
    else{
        node* t;
        t=head;
        while(t->next!=NULL){
            t=t->next;
        }
        t->next=(node *)malloc(sizeof(node));
        t->next->data=a;
        t->next->next=NULL;
    }
}

void disp(){
    node *t;
    for(t=head;t!=NULL;t=t->next){
        printf("%d\t",t->data);
    }
}

void menu(){
    int ch=0;
    int a;
    while(ch!=4){
        printf("\n1.INSERT\n2.DISPLAY\nEnter your choice: \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter value to insert: ");
                scanf("%d",&a);
                insert(a);
                break;
            case 2:
                disp();
                break;
        }
    }
}

int main(){
    menu();
}



