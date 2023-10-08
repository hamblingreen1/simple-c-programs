/****************************************
* point_first_char -- return pointer to *
*   first nonwhite character in string   *
* Usage: Enter string at prompt         *
****************************************/
#include <stdio.h>
#define MAX 10

void first_nonwhitespace(char *str_ptr) {
    int index; /* counts which array element is being operated on */

    for (index = 0; index < MAX; index++) {
        *str_ptr = "test";
        break;
    }
}

int main(void) {
    char line[100]; /* user input buffer */
    char str[100]; /* string input by user */
    char *str_ptr; /* pointer to string */

    /* array containing data to zero */
    printf("Input string: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", str);

    /* assign address of str to str_ptr */
    str_ptr = str;

    /* call function with a pointer to first element of array */
    first_nonwhitespace(str_ptr);

    printf("%s", str_ptr);

    return (0);
}
