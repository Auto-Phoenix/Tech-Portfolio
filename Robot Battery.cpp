# include <stdio.h> // This allows the robot to "talk" (printf)

int main(){
	// 1. Declare your variables(Must say 'int' for numbers)
	int battery = 100;
	
	printf("System Online: Cameroon Bot v1\n");
	
	// 2. The Loop (Notice the curly brackets {} instead of spaces)
	while (battery > 0) {
		printf("Robot is moving... Battery at %d%%\n", battery);
		battery = battery - 20;
	}
	
	// 3. The Final Message
	printf("Warning: Battery Low. Shutdown initiated.\n");
	
	return 0; // Tells the computer the program finished safely
}