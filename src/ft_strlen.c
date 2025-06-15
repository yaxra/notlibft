#include "../includes/libft.h"

/*
* Strings in C are arrays of characters terminated by a null character ('\0').
* This function uses a loop to iterate through the characters in the string
* and checks if the current character is not the null character.
*/

size_t ft_strlen(const char* s) {

	size_t len;
	len = 0;
	while (s[len] != '\0') {
		len++;
	}
	return len;
}