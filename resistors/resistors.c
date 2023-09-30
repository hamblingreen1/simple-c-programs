/****************************************
* resistors -- compute resistance	*
* Purpose: compute the total resistance	*
*   for a number of parallel resistors	*
* Usage: input resistance in ohms at	*
*   prompt, type 'q' to exit		*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: demonstrate for loops	*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>

int main() {
	char line[10];
	int resistor_count = 0; /* number of resistors in the network */
	int current_resistor = 0; /* resistance of currently input resistor */
	float total_resistance = 0; /* total resistance of all resistors in network */

	while (1) {
		printf("Input resistance in ohms (e.x. 200): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &current_resistor);

		if (current_resistor > total_resistance)
			total_resistance = current_resistor;

		if (current_resistor == 0) {
			resistor_count++;
			break;
		} else {
			resistor_count++;
		}
	}

	total_resistance /= resistor_count;

	printf("%g\n", total_resistance);

	return (0);
}
