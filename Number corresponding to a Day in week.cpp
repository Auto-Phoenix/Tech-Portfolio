#include<stdio.h>
int a;

int main(){
	do{
		
	printf("Input a number between 1 and 7: \n");
	scanf("%d", &a);
	
	}while(a<1 || a>7);

	if(a == 1)
	     printf("Today is Monday");
	else if(a == 2)
		 printf("Today is Tuesday");
	else if(a == 3)
	     printf("Today is Wednesday");
	else if(a == 4)
	     printf("Today is Thursday");
	else if(a == 5)
	     printf("Today is Friday");
	else if(a == 6)
	     printf("Today is Satursday");
	else if(a == 7)
	     printf("Today is Sunday");
	else 
	    printf("Input a number between 1 and 7");
	    
	    return 0;
}

