#include<stdio.h>
#include<stdlib.h>

typedef struct node{
int data;
struct node *next;
}node;

node *head=NULL;


void insert(int a){
node *t;
if(head==NULL){
head=(node *)malloc(sizeof(node));
head->data=a;
head->next=NULL;
}
else{
head=t;
while(t->next!=NULL){
t=t->next;

}
t->next->data=a;
t->next->next=NULL;

}
}
void disp(){
node *t;
t=head;
while(t!=NULL){
printf("%d\t",t->data);
}


int main(){
insert(40);
insert(80);
insert(120);
disp();
}
