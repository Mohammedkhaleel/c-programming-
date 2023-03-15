//2. WAP to input two numbers from the keyboard and print their average.
#include<stdio.h>

int main()
{
	int x = 0;  // datatype varibale = 0;it holds some memoey ; on top of that memory we will perform operations 
	int y = 0;  // datatype variable = 0; 
	int avg = 0; // datatype variable = 0 ; 
	printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
	
	printf("updated value of x =%d y =%d \n",x,y);
	
	avg = (x + y) / 2;
	
	printf("total avg of 2 elements is avg = %d\n",avg );
	return 0;
}