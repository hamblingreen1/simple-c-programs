/****************************************
* lc -- count lines in a file		*
* Usage: Input filename at prompt	*
****************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h> /* exit function */

/****************************************
* line_count -- count lines in a file	*
* Parameter				*
*   filename -- file to be counted	*
* Returns				*
*   lc -- integer number of lines in	*
*	  file string			*
****************************************/
int line_count(char filename[]) {
	FILE *input_file; /* input file */
	int lc = 0; /* line count */
	int ch = 0; /* character or EOF flag from input */

	input_file = fopen(filename, "r");

	if (input_file == NULL) {
		printf("Can not open file: %s\n", filename);
		exit(8);
	}

	while (1) {
		ch = fgetc(input_file);

		/* stop counting at EOF */
		if (ch == EOF)
			break;

		/* increment lc on new line */
		if (ch == '\n')
			lc++;
	}

	return lc;
}

int main(void) {
	char line[100]; /* input buffer */
	char filename[100]; /* input file name */

	printf("Enter a filename: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%s", filename);

	/* Count words in text */
	int lc = line_count(filename);

	printf("Line count: %d\n", lc);

	return (0);
}

