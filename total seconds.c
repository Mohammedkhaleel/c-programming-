 //4. WAP to print the total seconds in a given time (hrs, min, sec’s).
#include<stdio.h>
int main(){
	int hrs,min, sec;
	
	printf("Enter the time in hours, minutes, and seconds:\n");
    printf("Hours: ");
    scanf("%d", &hrs);
    printf("Minutes: ");
    scanf("%d", &min);
    printf("Seconds: ");
    scanf("%d", &sec);
    hrs = (sec/3600); 
    min = (sec -(3600*hrs))/60;
    sec = (sec -(3600*hrs)-(min*60));
    
    printf("The total number of seconds in %d hrs, %d min, and %d sec is %d.\n", hrs, min, sec);
   
}