#include "../includes/libft.h"

int ft_isalnum(int c) {
	if (c >= 65 && c <= 90) {
		return 1; // uppercase letters
	}

	if (c >= 97 && c <= 122) {
		return 1; // lowercase letters
	}

	if (c >= '0' && c <= '9') {
		return 1; // digits
	}

	return 0;
}