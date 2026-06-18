#include<stdio.h>
// COZY CALCULUS COMPANION
// This program calculates the slope(dy/dx) of a circle based on the equation: x^2 + y^2 = r^2

int main(){
	float x, y, slope;
	
	printf("--- Welcome to the Cozy Calc Corner ---\n");
	printf("Equation: x^2 + y^2 = r^2\n");
	printf("Derived Formula: dy/dx = -x / y\n\n");
	// Step 1: Get user input
	printf("Enter the x-coordinate: ");
    scanf("%f",&x);
    
	printf("Enter the y-coordinate: ");
	scanf("%f", &y);
	// Step 2: Handle the "Math Error" (Division by zero)
	if (y == 0){
		printf("\n[!] Oh no! If y is 0, the slope is undefined (vertical line).\n");
	} else{
		// Step 3: Calculate the derivative using the result from your homework!
		slope = -x / y;
		
		printf("\n--- Result ---\n");
	    printf("At point (%.2f, %.2f), the slope (dy/dx) is: %.3f\n", x, y, slope);
	    printf("Stay cozy and keep calculating!\n");
	}

	return 0;	
}