// To find the maximum number
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a, b, c;
int main(){
	printf("Enter 3 numbers: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	
	if(a > b)
		
		if(a > c)
	     printf("The maximum of the three numbers is %d\n",a);
		else
	     printf("The maximum of the three numbers is %d\n",c);
	 
    if(b > c)
		
	     printf("The maximum of the three numbers is %d\n",b);
	     
		else
	
		 printf("The maximum of the three numbers is %d\n",c);
    	
	
	
		
  
  return 0;
     	
}