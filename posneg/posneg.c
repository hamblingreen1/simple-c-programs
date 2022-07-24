/****************************************
* posneg -- Calculate the number of	*
*   positive and negative numbers in a	*
*   data set				*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Calculate the number of	*
*   positive and negative numbers in a	*
*   data set. To be small, fast, well-	*
*   documented, and demonstrate the	*
*   life cycle of a simple C program.	*
* Usage: Type in numbers seperated by	*
*   spaces				*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>
#include <string.h>

char	line[100];	/* user input line */
char	input[100];	/* manipulated input */
int	positive;	/* tally of positive numbers */
int	negative;	/* tally of negative numbers */
int	zeroes;	/* tally of zeroes in the data set*/

main() {
	while (1) {
		(void) strcpy(input, "0"); /* exit if user does not input data */

		/* read user input */
		(void) printf("Enter data seperated by spaces: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%s", &input);

		/* cycle through numbers, tallying up positive and negative values */
		(void) printf("%s \n", input);
		
		/* display user output 
		(void) printf("There are %d positive numbers and %d negative numbers in the supplied data set.\n", positive, negative);

*/

	}
	return (0);
}
