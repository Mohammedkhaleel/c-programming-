//9. WAP to SWAP three numbers without using fourth variable.

//a = a + b + c;
//b = a - (b + c);
//c = a - (b + c);
//a = a - (b + c);

#include<stdio.h>

int main(){
	int a,b,c;
	
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);
    
    printf("After swapping: a=%d, b=%d , c=%d\n",a,b,c);
    
    return 0;
}