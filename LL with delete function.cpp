#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
    
}node; 

node *head=NULL;


void insert(int a){
    if (head==NULL){
    head=(node*)malloc(sizeof(node));
    head->data=a;
    head->next=NULL;
}


else{
    node *t;
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
void delete(int a){
    node *t;
   
    if(t==NULL){
        printf("empty Linked List");
        
    }
    else if(head->data==a){
        head=head->next;
        
        
    }
    else{
         t=head;
         while(t->next !=NULL && t->next->data!=a){
             t=t->next;
         }
         
    }
    if(t->next==NULL){
        printf("elemt not found");
    }
    else{
        t->next=t->next->next;
    }
}

    
    
    


int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    disp();
    delete(30);
    disp();
    
}


