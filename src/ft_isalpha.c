#include "../includes/libft.h"

/**
* this function is defined to work with ASCII characters
* this means that if the user enters 99, it will return 1
* because 99 is the ASCII value for 'c'

* ASCII alphabet characters are from 65 to 90 for uppercase
* and from 97 to 122 for lowercase
*/

int ft_isalpha(int c) {

	if (c >= 65 && c <= 90) {
		return 1; // uppercase letters
	}

	if (c >= 97 && c <= 122) {
		return 1; // lowercase letters
	}

	return 0; 
}