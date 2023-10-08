/****************************************
* airline_system - airline reservation	*
*   system				*
* Usage: Enter two airport codes at	*
*   prompt				*
****************************************/
#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 50

int main(void) {
	char line[100];	/* user input line */
	int counter = 0; /* for loop counter */
	char search_originating_code[3];
	char search_destination_code[3];

	struct airline_index {
		int flight_number;	
		char originating_code[3];	/* three character departing abbreviation */
		char destination_code[3];
		char departure_time[5];		/* in the format XX:XX */
		char arrival_time[5];
	} reservation_data = {
		8025,
		"PDX",
		"DFW",
		1845,
		2250
	};

	/* Receive user input */
	for (counter = 0; counter < MAX_ENTRIES; counter++) {
		printf("Originating airport code (e.g. PDX): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%s", search_originating_code);

		if (strcmp(search_originating_code, "") == 0)
			break;
	}

	for (counter = 0; counter < MAX_ENTRIES; counter++) {
		if (strcmp(reservation_data[counter].originating_code, search_originating_code) == 0)
			printf("%d, %s, %s, %s, %s", reservation_data[counter].flight_number, reservation_data[counter].originating_code, reservation_data[counter].destination_code, reservation_data[counter].departure_time, reservation_data[counter].arrival_time); 
	}

	return (0);
}

