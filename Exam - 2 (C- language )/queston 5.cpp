#include<stdio.h>
 int main() {
 	 int num ,firstdigit,lastdigit;
 	 
 	 printf("Enter the number:");
 	  scanf("%d",&num);
 	   

 	lastdigit=num%10;
 	
 	 while (num>10) {
 	 	 num=num /10;
	  }
	  
	  printf("sum of the first and lastdigit ::%d\n",firstdigit+lastdigit);
	
 	  return 0;  
 }