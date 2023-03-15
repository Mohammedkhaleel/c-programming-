//8. WAP to SWAP (interchange) three numbers.
//temp = b;
//   b = a;
//   a = c;
//   c = temp;

#include<stdio.h>

int main(){
	int a,b,c,temp;
	
	printf("Enter three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	
	temp = b;
    b = a;
    a = c;
    c = temp;
    
    printf("After swapping: a=%d, b=%d , c=%d\n",a,b,c);
    
    return 0;
}