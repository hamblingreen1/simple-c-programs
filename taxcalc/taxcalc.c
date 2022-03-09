/****************************************
* TaxCalc -- Sales tax calculator	*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Find the added cost of sales	*
*   tax to a product of a particular	*
*   price, and display this information	*
*   in a command-line interface. To be	*
*   small, fast, well-documented, and	*
*   demonstrate the life cycle of a	*
*   simple C program.			*
* Usage: Type in price and (optionally)	*
*   desired sales tax percentage. The	*
*   default sales tax percentage is 8%.	*
*   Enter a blank line to exit.		*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>

char	line[100];	/* user input line */
float	price;	/* input price */
float	tax;	/* sales tax percentage */
int	tempround;	/* temporary integer used for rounding */
float	finalprice;	/* item price post-tax */

int main() {
	while (1) {
		price = 0; /* exit if user does not input number */
		tax = 8; /* default sales tax percentage */
		/* read user input */
		(void) printf("Input price: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%f %f", &price, &tax);

		/* exit command */
		if (price <= 0) {
			break;
		}

		/* convert */
		finalprice = price + price * (tax / 100);
		/* round result. NOTE: I chose not to use the round() function from math.h because pulling in that library felt unnessescary when it takes just a few lines of code to implment a round function without all those extra components.  */
		tempround = 0;
		finalprice *= 100;
		tempround = finalprice;
		finalprice = tempround;
		finalprice /= 100;

		/* display user output */
		(void) printf("%f will cost you %f after a %f percent sales tax.\n", price, finalprice, tax);
	}
	return (0);
}
