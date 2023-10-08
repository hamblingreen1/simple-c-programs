/****************************************
* wc -- simple word counter		*
* Usage: Input string at prompt		*
* Notes: A "word" is defined as a	*
*   collection of characters separated	*
*   by a space or hyphen.		*
****************************************/
#include <stdio.h>
#include <string.h>

/****************************************
* word_count -- count words in a string	*
* Parameter				*
*   text -- string to be counted	*
* Returns				*
*   wc -- integer count of words in	*
*	  string			*
****************************************/
int word_count(char text[]) {
	int wc = 0;
	int counter = 0;

	for (counter = 0; text[counter] != '\0'; counter ++) {
		if (text[counter] == ' ')
		wc++;
	}

	return wc;
}

int main(void) {
	char text[100];

	/* Count words in text */
	int word_count(char text[]);

	printf("Enter a sentence: ");
	fgets(text, sizeof(text), stdin);

	printf("%d", word_count(text[100]));
	return (0);
}
