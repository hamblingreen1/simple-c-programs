/****************************************
* vowel_or_consonant - check whether	*
*   character is a consonant or vowel	*
* Usage: Type in character at prompt	*
****************************************/
#include <stdio.h>

int main(void) {
	char line[2] = "0"; /* Input line */
	char input = '0'; /* Character input */
	int vowel = '0'; /* Vowel or not */

	/* Receive user input */
	printf("Input character (a-z, A-Z): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%c", &input);

	/* Check for vowel, consonant, or non-letter */
	switch (input) {
		case 'a':
			vowel = 1;
			break;
		case 'A':
			vowel = 1;
			break;
		case 'b':
			vowel = 0;
			break;
		case 'B':
			vowel = 0;
			break;
		case 'c':
			vowel = 0;
			break;
		case 'C':
			vowel = 0;
			break;
		case 'd':
			vowel = 0;
			break;
		case 'D':
			vowel = 0;
			break;
		case 'e':
			vowel = 1;
			break;
		case 'E':
			vowel = 1;
			break;
		case 'f':
			vowel = 0;
			break;
		case 'F':
			vowel = 0;
			break;
		case 'g':
			vowel = 0;
			break;
		case 'G':
			vowel = 0;
			break;
		case 'h':
			vowel = 0;
			break;
		case 'H':
			vowel = 0;
			break;
		case 'i':
			vowel = 1;
			break;
		case 'I':
			vowel = 1;
			break;
		case 'j':
			vowel = 0;
			break;
		case 'J':
			vowel = 0;
			break;
		case 'k':
			vowel = 0;
			break;
		case 'K':
			vowel = 0;
			break;
		case 'l':
			vowel = 0;
			break;
		case 'L':
			vowel = 0;
			break;
		case 'm':
			vowel = 0;
			break;
		case 'M':
			vowel = 0;
			break;
		case 'n':
			vowel = 0;
			break;
		case 'N':
			vowel = 0;
			break;
		case 'o':
			vowel = 1;
			break;
		case 'O':
			vowel = 1;
			break;
		case 'p':
			vowel = 0;
			break;
		case 'P':
			vowel = 0;
			break;
		case 'q':
			vowel = 0;
			break;
		case 'Q':
			vowel = 0;
			break;
		case 'r':
			vowel = 0;
			break;
		case 'R':
			vowel = 0;
			break;
		case 's':
			vowel = 0;
			break;
		case 'S':
			vowel = 0;
			break;
		case 't':
			vowel = 0;
			break;
		case 'T':
			vowel = 0;
			break;
		case 'u':
			vowel = 1;
			break;
		case 'U':
			vowel = 1;
			break;
		case 'v':
			vowel = 0;
			break;
		case 'V':
			vowel = 0;
			break;
		case 'w':
			vowel = 0;
			break;
		case 'W':
			vowel = 0;
			break;
		case 'x':
			vowel = 0;
			break;
		case 'X':
			vowel = 0;
			break;
		case 'y':
			printf("Y is sometimes a vowel");
			break;
		case 'Y':
			printf("Y is sometimes a vowel");
			break;
		case 'z':
			vowel = 0;
			break;
		case 'Z':
			vowel = 0;
			break;
		default:
			printf("The character input was not a letter. Try again!\n");
			break;
	}

	/* Print result */
	if (vowel == 0)
		printf("Character '%c' is not a vowel", input);
	if (vowel == 1)
		printf("Character '%c' is a vowel", input);

	return 0;
}
			
