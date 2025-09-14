#include<stdio.h>
int main(){
    int i;
    int arr[10];
    printf("enter 10 elements");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("array elemets are \n");
    for(i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}


