/****************************************
* snake_case - convert text from kebab-	*
*   case to snake_case			*
* Usage: Input string at prompt		*
****************************************/
#include <stdio.h>
#include <string.h>

int main(void) {
	char kebab_case[100]; /* Text before conversion */
	char convert_snake_case(char kebab_case[]); /* Convert snake case function prototype */

	/* Receive user input */
	printf("Input text: ");
	fgets(kebab_case, sizeof(kebab_case), stdin);

	convert_snake_case(kebab_case);
	/* Print result */
	printf("%s", kebab_case);
	return (0);
}

/****************************************
* convert_snake_case -- replace all	*
*   occurrences of '-' with '_'		*
* Parameter				*
*   kebab_case -- text to be converted	*
* Returns				*
*   snake_case -- converted text	*
****************************************/
char convert_snake_case(char kebab_case[]) {
	int counter = 0;
	char snake_case[100];

	for (counter = 0; kebab_case[counter] != '\0'; counter++) {
		if (kebab_case[counter] == '-')
			snake_case[counter] = '_';
		else
			snake_case[counter] = kebab_case[counter];
	}

	strcpy(kebab_case, snake_case);

	return snake_case[100];
}
