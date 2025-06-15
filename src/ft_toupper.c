#include "../includes/libft.h"

int ft_toupper(int c) {
	if (c >= 97 && c <= 122) { // lowercase letters
		return c - 32; // convert to uppercase by subtracting 32
		// ASCII values: 'a' (97) to 'z' (122) are 32 less than 'A' (65) to 'Z' (90)
	}

	return c; // if it's not a lowercase letter, return it unchanged
}