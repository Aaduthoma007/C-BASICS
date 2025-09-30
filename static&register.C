#include<stdio.h>
 int g=20;
void statics(){
static int d=1;
	printf("%d\n",d);
	d++;
	
}
int main(){
	
	//local variable
	int a=10;
	printf("local variable value is %d\n",a);
	printf("%d is global variable\n",g);
	//register
	register int r=2;
	printf("%d is the register variable\n",r);
	statics();
	statics();
	statics();
	

}
