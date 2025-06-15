#include "../includes/libft.h"

/*
* This function verifies if the character is an ASCII character (0 - 127).
*/

int ft_isascii(int c) {
	if (c >= 0 && c <= 127) {
		return 1;
	}

	return 0;
}