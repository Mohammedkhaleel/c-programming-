//7. WAP to SWAP (interchange) 2 numbers without using third variable.

//a = a + b;
//b = a - b;
//a = a - b;
#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	
	a = a + b;
    b = a - b;
    a = a - b;
	
	printf("After swapping: a=%d, b=%d\n",a,b);
	
	return 0;
}