/****************************************
* mailing_labels - generate mailing	*
*   labels from names and addresses	*
* Usage: Input name and address at	*
*   prompt, entering a blank line to	*
*   complete list			*
****************************************/
#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 50

int main(void) {
	char line[100];	/* user input line */
	int counter = 0; /* for loop counter */

	struct mailing {
		char name[30]; /* name of person */
		char address1[60]; /* Two lines of street address */
		char address2[60];
		char city[40];
		char state[2];	/* two character abbreviation */
		int zip;	/* numeric zip code */
	};

	struct mailing list[MAX_ENTRIES];

	/* Receive user input */
	for (counter = 0; counter < MAX_ENTRIES; counter++) {
		printf("Name: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", list[counter].name);

		if (strcmp(list[counter].name, "") == 0)
			break;

		printf("Address first line: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", list[counter].address1);

		printf("Address second line: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", list[counter].address2);

		printf("City: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", list[counter].city);

		printf("State (e.g. OR): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", list[counter].state);

		printf("Zip code: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &list[counter].zip);
	}

	return (0);
}

