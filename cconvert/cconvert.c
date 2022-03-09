/****************************************
* cConvert -- convert imperial to	*
*   metric units in your terminal	*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Convert units of measurement	*
*   from imperial to metric through the	*
*   command line. To be small, fast,	*
*   well-documented, and demonstrate	*
*   the life cycle of a simple C	*
*   program.				*
* Usage:				*
*   Type in the number of units you	*
*   need to convert, followed by the	*
*   unit character according to the	*
*   following chart:			*
*      Unit	| Meaning		*
*      -----------------		*
*      i	| Inches		*
*      f	| Feet			*
*      y	| Yards			*
*      m	| Miles			*
* Reference: Steve Oualline		*
* Restrictions:				*
*   Only works for the units listed	*
*   above. Corresponding metric unit	*
*   not listed in output.		*
****************************************/

#include <stdio.h>

char	line[100];	/* user input line */
float	value;	/* value specified before the unit */
char	unit;	/* unit the user specified */
float	result;	/* final result */

main() {
	while (1) {
		unit = 'q';	/* set unit back to an unaccepted one so that if none is given the program exits */

		/* read user input */
		(void) printf("Please input amount followed by unit: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%f %c", &value, &unit);

		/* convert */
		if (unit == 'i') {
			result = value * 2.54;	/* convert inches to centimetres */
		} else if (unit == 'f') {
			result = value * .3048;	/* convert feet to meters */
		} else if (unit == 'y') {
			result = value * .9144;	/* convert yards to meters */
		} else if (unit == 'm') {
			result = value * 1.6093;	/* convert miles to kilometers */
		} else {
			(void) printf("Unknown unit %c\n", unit);	/* disply error msg */
		break;
		}
		(void) printf("%f %c is equal to %f metric units\n", value, unit, result);	/* print result */
	}
}
