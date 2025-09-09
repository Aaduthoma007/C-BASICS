#include<stdio.h>

void swap(int *x, int *y){
    int temp=0;
    temp = *x;
    *x=*y;
    *y =temp;
   
    
}

int main(){
    int a=5,b=10;
    
    
    
    swap(&a,&b);
     printf("swapped values are %d and %d",a,b);
}
