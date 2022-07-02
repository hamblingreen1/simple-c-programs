/****************************************
* PrimeOrNot -- Find out whether a	*
*   number is prime or not through a	*
*   series of tests			*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Find out whether a number is	*
*   prime or not and display that	*
*   information in a command-line	*
*   interface. To be small, fast,	*
*   well-documented, and demonstrate	*
*   the life cycle of a simple C program*
* Usage: Type in number. Enter a blank	*
*   line to exit.			*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>
#include <string.h>

char	line[100];	/* user input line */
int	input;	/* number in question */
int	test;	/* test integer */
int	sum;	/* sum of input digits */
int	leftovers;	/* leftovers after integer digits */
char	prime[10];	/* 'yes' or 'no' string whether number is prime or not */
float	divisible;	/* sum / 3 */

int main() {
	while (1) {
		input = 0; /* exit if user does not input number */
		(void) strcpy(prime, "prime"); /* set default prime value */

		/* read user input */
		(void) printf("Input number in question: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%d", &input);

		/* exit command */
		if (input <= 0) {
			(void) strcpy(prime, "invalid");
			break;
		}

		/* knock out even numbers and those ending in a 5 */
		test = input % 10;
		if ((test == 0) || (test == 2) || (test == 4) || (test == 5) || (test == 6) || (test == 8)) {
			(void) strcpy(prime, "not prime");
			break; 
		}

		/* find the sum of the digits */
		test = input; /* set test variable */
		while (test != 0) {
			leftovers = test % 10; /* isolate last digit of input */
			sum = sum + leftovers; /* add to sum */
			test = test / 10; /* remove last digit of test */
		}

		/* is that sum evenly divisible by three? */
		divisible = sum / 3;
		if (divisible - (int) divisible == 0) {
			(void) strcpy(prime, "prime");
			break;
		}
	}
		/* print result */
		(void) printf("%d is %s.\n", input, prime);

	return (0);
}
