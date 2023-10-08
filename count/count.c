/****************************************
* count -- count number of times value	*
*   appears in array			*
****************************************/
#include <stdio.h>

/****************************************
* count -- count values in array	*
* Parameters				*
*   number -- number to count		*
*   array -- array to be searched	*
*   length -- length of array		*
* Returns				*
*   instances -- number of times value	*
*     appears in array			*
****************************************/
int count(int number, int array[], int length) {
	if (array[0] == 0)
		return (0);

	if (array[0] == number)
		return 1 + count(number, array + 1, length - 1);
	/* else */
	return count(number, array+1, length - 1);
}

int main(void) {
	int array[] = {1, 2, 3, 4, 3, 2, 1};
	int length = sizeof(array) / sizeof(array[0]);
	int number = 3;

	int frequency = count(number, array, length);

	printf("The number %d appears %d times in the array.\n", number, frequency);

	return (0);
}
