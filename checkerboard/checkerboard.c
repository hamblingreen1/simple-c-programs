/****************************************
* checkerboard -- print checkerboard	*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: demonstrate for loops	*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>

int counter;
int counter2;
int counter3;
int width = 7; /* width of checkerboard - 1 */
int height = 7; /* width of checkerboard - 1 */

int main() {
	for (counter2 = 0; counter2 <= height; counter2++) {
		/* Print top row */
		for (counter = 0; counter <= width; counter++) {
			printf("+-----");
		}
		printf("+\n");
		/* Print middle */
		for (counter3 = 0; counter3 <= 3; counter3++) {
			for (counter = 0; counter <= width; counter++) {
				printf("|     ");
			}
			printf("|\n");
			}
		}
		/* Print bottom row */
		for (counter = 0; counter <= width; counter++) {
			printf("+-----");
		}
		printf("+\n");

	return (0);
}
