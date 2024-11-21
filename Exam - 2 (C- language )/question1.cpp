#include<stdio.h>
  int main() {
  	 float  angle1,angle2,angle3;
  	    printf("Enter the first angle of the triangle: ");
  	     scanf("%f",&angle1);
  	     
  	    printf("Enter the second angle of the triangle:");
		  scanf("%f",&angle2);
		     
	    angle3 =180-(angle1+angle2);
		 if (angle1<=0 |angle2<=0| angle3<=0) {
		 	printf("Invild the angles the sum of the angles must be 180 degress.\n");
		 }
		  else{
		  	 printf("The third angle of the triangle:%2f\n",angle3);
		  }
		  return 0;  
  }