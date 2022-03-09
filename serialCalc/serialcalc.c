/****************************************
* serialCalc -- Serial data transfer	*
* speed calculator			*
* Author: hamblingreen			*
*   <hamblingreen@hotmail.com>		*
* Purpose: Calculate how long data	*
* transfer through a serial cable would	*
* take. To be small, fast, well		*
* documented, and demonstrate the life	*
* cycle of a simple C program.		*
* Usage: Type in the data size in Mb	*
*   and, if you wish, the baud rate of	*
*   your serial port (seperated by a	*
*   space). If the baud rate is not	*
*   specified, the Pinephone's default	*
*   of 115200 will be used		*
* Reference: Steve Oualline		*
****************************************/

#include <stdio.h>

char	line[100];	/* user input line */
int	bits;		/* amount of data specified, converted into bits */
float	megabytes;	/* amount of data specified in megabytes */
int	hours;		/* hours the data transfer will take */
int	minutes;	/* minutes the data transfer will take */
int	seconds;	/* seconds the data transfer will take */
int	baudrate;	/* transfer rate of the serial cable */
int	totalseconds;	/* total seconds required for data transfer */

int main() {
	baudrate = 115200;	/* set default baud rate, based off of the default baud rate for the Pinephone's serial port */

	while (1) {
		megabytes = 0; /* exit if user does not input number */

		/* read user input */
		(void) printf("Input data size in Mb: ");
		(void) fgets(line, sizeof(line), stdin);
		(void) sscanf(line, "%f %d", &megabytes, &baudrate);

		/* exit command */
		if (megabytes == 0) {
			break;
		}

		/* convert */
		bits = megabytes * 8000000;
		totalseconds = bits / baudrate;
		hours = totalseconds / 3600;
		minutes = (totalseconds - hours*3600) / 60;
		seconds = totalseconds - hours*3600 - minutes*60;

		/* display user output */
		(void) printf("%f Mb will take %d hours, %d minutes and %d seconds.\n", megabytes, hours, minutes, seconds);
	}
	return(0);
}
