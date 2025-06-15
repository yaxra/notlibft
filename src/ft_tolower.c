#include "../includes/libft.h"

int ft_tolower(int c) {
	if (c >= 65 && c <= 90) { // uppercase letters
		return c + 32; // convert to lowercase by adding 32
		// ASCII values: 'A' (65) to 'Z' (90) are 32 more than 'a' (97) to 'z' (122)
	}
	return c; // if it's not an uppercase letter, return it unchanged
}