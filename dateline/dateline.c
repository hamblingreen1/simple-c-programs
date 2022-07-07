/****************************************
* dateline -- Find the time between two	*
*   dates				*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Find the time between two	*
*   dates, and display in a command	*
*   line interface. To be small, fast,	*
*   well-documented, and demonstrate	*
*   the life cycle of a simple C	*
*   program.				*
* Usage:				*
*   Type in the first date, followed by	*
*   the second in the following format:	*
*   12 4 22 4 2 23. Enter a blank line	*
*   to exit.				*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>

char	line[100];	/* user input line */
int	day1;	/* first day specified */
int	month1;	/* first month specified */
int	year1;	/* first year specified */
int	day2;	/* second day specified */
int	month2;	/* second month specified */
int	year2;	/* second year specified */
int	day3;	/* output day */
int	month3;	/* output month */
int	year3;	/* output year */

main() {
	while (1) {
		day1 = 0; /* exit if user does not input number */

		/* read user input */
		(void) printf("Enter dates in the following format- dd mm yyyy dd mm yyyy: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%d %d %d %d %d %d", &day1, &month1, &year1, &day2, &month2, &year2);

		/* exit command */
		if ((day1 == 0) || (day2 == 0)) {
			break;
		}

		/* convert */
		day3 = day2 - day1;
		month3 = month2 - month1;
		year3 = year2 - year1;
		
		/* change negative numbers to positive ones */
		if (day3 < 0)
			day3 = day3 * -1;
		if (month3 < 0)
			month3 = month3 * -1;
		if (year3 < 0)
			year3 = year3 * -1;

		/* display user output */
		(void) printf("Between %d %d %d and %d %d %d, there are %d days, %d months, and %d years.\n", day1, month1, year1, day2, month2, year2, day3, month3, year3);
	}
	return (0);
}