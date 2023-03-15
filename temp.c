//5. WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9 
//celsius = (fahrenheit - 32) * 5 / 9

#include<stdio.h>
int main(){
	float fahrenheit,celsius;
	
	printf("Enter the temp in Fahrenheit:");
	scanf("%f",&fahrenheit);
	
	celsius = (fahrenheit - 32) * 5 / 9;
	
	printf("%.2f degrees Fahrenheit is equal to %.2f degrees celsius.\n", fahrenheit, celsius);
	return 0;
	
	
}