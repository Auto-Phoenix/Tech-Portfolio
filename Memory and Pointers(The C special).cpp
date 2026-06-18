#include <stdio.h>

int main(){
	int num = 42;
	int *ptr = &num; // ptr now holds the address of num
	
	printf("Value of num: %d\n", num);
	printf("Address of num: %p\n", (void*)&num);
	printf("Value via pointer: %d\n"), *ptr; // "Dereferencing" the pointer
	
	return 0;
}